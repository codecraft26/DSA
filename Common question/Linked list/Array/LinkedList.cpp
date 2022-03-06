#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
    int key;        
    Node* next;     
};
Node* newNode(int key)
{
    
    Node* node = new Node;
    node->key = key;
    node->next = nullptr;
 
    return node;
}
Node* constructList()
{
    
    Node* first = newNode(1);
    Node* second = newNode(2);
    Node* third = newNode(3);
 
   
    Node* head = first;
    first->next = second;
    second->next = third;
 
    
    return head;
}
void printList(Node* head)
{
    Node* ptr = head;
    while (ptr)
    {
        cout << ptr->key << " -> ";
        ptr = ptr->next;
    }
 
    cout << "nullptr";
}



int main()
{


    Node *head = constructList();
     printList(head);
    
    return 0;
}