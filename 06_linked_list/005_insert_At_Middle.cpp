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

  void insertAtHead(Node* &head,int d){

    //create temp (new node)
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

  }

 void insertAtTail(Node* &tail, int d){
     
     //created a new node
     Node* temp=new Node(d); 
     
     tail->next=temp;
     tail=temp;

 }

 void nodeToInsert(Node* &head,int position,int data){ //if you do not take & , then it will not work


      if(position==1){ //you can insett at position 1
          insertAtHead(head,data);
          return; // so that statements below this lines will not execute
      }

      //make temp pointer which will point to just previous node  after which we have to insert a node
      Node* temp=head; // it will point to the same node which head is pointing
    
       int curr=1; // intitially it is pointing to the first node
       while(curr<position-1){
            
            temp=temp->next;  //this will change the node one by one.
            curr++;
       }

      //make new node
      Node* nodeToinsrt=new Node(data);

      //10 20 40 50 
      //suppose we want to insert 30 after 20  and before 40 . so 20->next have the address of 40 th node
      // so nodeToinsrt->next is null initially . so it should be pointing to 40 th node.to do that we have to do NodetoInsert->next=temp->next . ie 20 th nodes next because temp is pointing to the 20th node
      // and this temp->next should be pointing to the data of 30.ie nodetoinset.it temp->next should store the address of nxt node(data address of next node)
      
      nodeToinsrt->next=temp->next;
      temp->next=nodeToinsrt;

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

  // Node* node2 =new Node(20);
  //  head->next=node2;
  // node1->next=node2;   //so head next will containt address of node2 node. if this statement is not present , then head ->next will containt value as null
  //  cout<<head->data<<endl; //10
  //  cout<<head->next<<endl; //address of node 2
  //  head=head->next;   
  //   cout<<head->data<<endl; //20
  //  cout<<head->next<<endl; //NULL

  displayLL(head);
  


  insertAtTail(tail,12);
  displayLL(head);


  insertAtTail(tail,15);
  displayLL(head);
  

  insertAtTail(tail,18);
  displayLL(head);

  nodeToInsert(head,2,11); // we cant insert new node at position 1
  displayLL(head);


//   Node* head1=new Node(20);
//   Node* head2=new Node(40);

//   head1->next=head2;
//   head1=head1->next;  // means head1 now points to head2 //if we dont use this. then head1 is pointing to 20th node
// //   cout<<head1->data<<endl;    //40
//   cout<<head2->data<<endl; //40  very imp to understand now

//  cout<<head1->next<<"  "; 
//  cout<<head2->next<<endl;

//  Node* p=head1;
//  cout<<p->data;   -40 because of head1=head1->next;
    return 0;
}