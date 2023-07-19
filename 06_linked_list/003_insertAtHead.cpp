#include<bits/stdc++.h>
using namespace std;


class llnode{

    public:
     int data;
     llnode* next;


     //constructor in the linked list
     llnode(int data){
        this -> data=data;
        this -> next = NULL;
     }

};

void insertAtHead(llnode* &head,int d){
    //new node create
    llnode* temp=new llnode(d);
    temp ->next=head;   
    head=temp;
}

void printlist(llnode* &head){
//here head pointer points to the  object of type class . thats  why data type of this pointer becomes class name of that object
  
    llnode* temp=head;
    while(temp != NULL){
        cout<<temp ->data<<"  ";
        temp=temp ->next;
    }
}



int main()
{

//create object poiner of the class llnode
llnode* node1=new llnode(10);
// cout<<node1->data<<endl;
// cout<<node1->next;

//  head pointer points to node
llnode* head=node1;
printlist(head); 

insertAtHead(head,12);  
printlist(head);
    

   return 0;
}