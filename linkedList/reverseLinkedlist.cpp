#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }


};
struct LinkedList {
    Node* head;
    LinkedList() { 
        head = NULL;
         }
         void reverse(Node *head) {
            Node *prev = NULL;
            Node *current = head;
            Node *next = NULL;
            while (current != NULL) {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            head = prev;
         }
         void print(Node *head){
            Node *temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
         }
         void push(Node *head){
            Node* temp = new Node(data);
            temp->next = head;
            head = temp;
                }
         };

int main(){
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
   ll.print();
   ll.reverse();
   cout << "\nReversed Linked list \n";
    ll.print();



return 0;
}