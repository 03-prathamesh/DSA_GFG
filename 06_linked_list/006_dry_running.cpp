#include<bits/stdc++.h>
using namespace std;



class Node{

 public:
   int data;
   Node* next;

// if we are using constructor then we must pass the argumnet while creating node in main function

   Node(int data){
       this->data=data;
       this->next=NULL;
   }

  

};

int main(){


      Node * node1 =new Node(10);




    //   node1->data=10;
    //   node1->next=NULL;

    //here if even if node1 is now pointing to aanother node but still head pointing at node1 first value where it was pointing . and head1 will not change untill we change him
      Node *node2=new Node(20);
      node1->next=node2;
      Node *head=node1;
      node1=node1->next;
      cout<<head->data<<endl;
      cout<<node1->data<<endl;
      cout<<node2->data<<endl;
}