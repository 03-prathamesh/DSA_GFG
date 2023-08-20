#include<bits/stdc++.h>
using namespace std;

class Prathamesh{

 public:
   int data;
   Prathamesh* next;

// if we are using constructor then we must pass the argumnet while creating node in main function

   Prathamesh(int data){
       this->data=data;
       this->next=NULL;
   }

   Prathamesh(){
      data=10;
      next=nullptr;
}

};

int main(){

   //lets create a new node first;
   Prathamesh *node1=new Prathamesh;
   Prathamesh * node2=new Prathamesh(40);
   node1->data=30;
   node1->next=node2;   //node1 (or node1's next) will now point to node2(or node2's data)
   cout<<node1->data<<endl;
   cout<<node1->next<<endl;

   cout<<node2->data<<endl;
   cout<<node2->next;

   //if there is no constructor in class prathamesh , then it will give some random value
   //if there is 2 constructor parametesised and non parameterised , then it will call to non parameterises and it value become 0(data), because we initialised data=0 in non parameterised constructor
   //if we pass argument then parameterised constructor will be called


    return 0;
}