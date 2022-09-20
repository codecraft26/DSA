#include <bits/stdc++.h>
using namespace std;
 class Node {
    public:
        int data;
        Node* next;
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;

        }
        // new node create
    void insertAtHead(Node* &head,int d ){

        Node* temp=new Node(d);
        temp->next=head;
        head=temp;



    }

    
 };

    void printLinkedList(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
            
        }
        cout<<endl;
    

    }
    void insertAtTail(Node* &head,int d){
       Node* new_head= new Node();
       Node* last=new_head;
       new_head->data=d;
       new_head->next=NULL;
       
    }

int main(){
    //create a new node 
    Node* node1 = new Node(10);
    

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head=node1;

    insertAtHead(head,12);
      insertAtHead(head,46);
        insertAtHead(head,373);
    printLinkedList(head);
    cout<<endl;
    insertAtTail(head,34);


    

return 0;
}