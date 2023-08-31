
#include <iostream>

using namespace std;

class LinkNode{
    
     public:
       int val;
       LinkNode *next;
       
     LinkNode(int val){
         this->val=val;
         this->next=NULL;
     }
};

int main()
{
    LinkNode *node1=new LinkNode(10);
    LinkNode *node2=new LinkNode(20);
    LinkNode *node3=new LinkNode(30);
    
    node1->next=node2;
    node2->next=node3;
    
    LinkNode * head=node1;
    while(head!=node3){    //head->mext!=NULLL   then head will point to last node
        head=head->next;
    }
    cout<<head->val;  //head will pointing to null 

    return 0;
}
