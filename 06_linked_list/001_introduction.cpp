#include<bits/stdc++.h>
using namespace std;


class llnode{

    public:
     int data;
     llnode* next;

};




int main()
{

//create object of the class llnode
llnode* node1=new llnode();
cout<<node1->data<<endl;
cout<<node1->next;



   return 0;
}