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




int main()
{

//create object of the class llnode
llnode* node1=new llnode(10);
cout<<node1->data<<endl;
cout<<node1->next;



   return 0;
}