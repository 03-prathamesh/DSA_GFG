#include<bits/stdc++.h>
using namespace std;

class TowStack{
   
    //bydefault private data members of class TwoStack
     int  *arr;
     int top1;
     int top2;
     int size;


   public:

     //Initialise the 2 stacks
     TowStack(int s){

         this->size=s;
         top1=-1;
         top2=s;
         arr=new int[size];
     }
     //push in stack1
     void push1(int num){
         //stack 1 insertion will be from LEFT to RIGHT
         if(top2-top1>1){         //atleast 1 space is present
              top1++;
              arr[top1]=num;
         }
         else{
            cout<<"Stack overflow. Your stack is full now"<<endl;
         }

     }
     //push in stack2
     void push2(int num){
       //stack 2 insertion will be from RIGHT to LEFT
        if(top2-top1>1){
            top2--;
            arr[top2]=num;

        }
        else{
            cout<<"Stack overflow. Your stack is full now"<<endl;
        }

     }


     int pop1(){
         if(top1>=0){
             int ans=arr[top1];
             top1--;
             return ans;
         }
         else{
            cout<<"Yout stack is empty to remove element from it "<<endl;
         }
     }

     int pop2(){
         if(top2<size){
                int ans=arr[top2];
                top2++;
                return ans;
         }
         else{
            cout<<"Your stack is empty to remove the elements from it"<<endl;
         }
     }




};

int main(){



   TowStack s1(4);
   s1.push1(2);
   s1.push1(3);
   s1.push1(4);
//    s1.push1(5);
   s1.push2(40);
//   s1.pop1();
  s1.push2(300);


   






    return 0;
}