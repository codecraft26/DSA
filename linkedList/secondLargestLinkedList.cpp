#include <iostream>

// Define the singly linked list node structure
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int findSecondLargest(ListNode* head) {
    if (!head || !head->next) {
        std::cout << "List has fewer than two elements.\n";
        return -1; // Or any appropriate value to indicate an error
    }

    int largest = std::max(head->val, head->next->val);
    int secondLargest = std::min(head->val, head->next->val);

    ListNode* current = head->next->next;
    while (current) {
        if (current->val > largest) {
            secondLargest = largest;
            largest = current->val;
        } else if (current->val > secondLargest && current->val != largest) {
            secondLargest = current->val;
        }
        current = current->next;
    }

    return secondLargest;
}

// Helper function to create a linked list from an array
ListNode* createLinkedList(int arr[], int size) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < size; ++i) {
        ListNode* newNode = new ListNode(arr[i]);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Helper function to free memory allocated for the linked list
void deleteLinkedList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createLinkedList(arr, size);
    int secondLargest = findSecondLargest(head);
    
    if (secondLargest != -1)
        std::cout << "The second largest number in the linked list is: " << secondLargest << "\n";

    deleteLinkedList(head);
    return 0;
}
