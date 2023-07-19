#include<bits/stdc++.h>
using namespace std;


class Node{

 public:
   int data;
   Node* next;


   Node(int data){
       this->data=data;
       this->next=NULL;
   }

};

 void insertAtTail(Node* &tail, int d){
     
     //created a new node
     Node* temp=new Node(d); 
     
     tail->next=temp;
     tail=tail->next;//tail is now node which is inserted at last ie 12  //tail=temp;  this is also a alternative syntax

 }

 void displayLL(Node* head ){

     //created a temp pointer which points to the head ie first node of the linked list
     Node* temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
 }

int main(){

   //created first node of the linked list 
  Node* node1 =new Node(10);
  

  //create head pointer and tail pointer which will point to the first node ie node1
  Node* head=node1;
  Node* tail=node1;

  displayLL(head);
  


  insertAtTail(tail,12);
  displayLL(head);


  insertAtTail(tail,15);
  displayLL(head);
  

  insertAtTail(tail,18);

  displayLL(head);

    return 0;
}