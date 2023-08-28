#include<bits/stdc++.h>
using namespace std;


class Stack{

   //properties of data members
   public :
      int *arr;
      int top;
      int size;

    //behaviours or member functions
    Stack(int size){         //costructor of stack class
        this->size=size;
        arr=new int[size];
        top=-1;


    }     


    void push(int element){

          if(top!=size-1){
               top++; //increment the top first to insert the new value inside the stack
               arr[top]=element;
          }
          else{
            cout<<"Stack Overflow"<<endl;
          }
    }

    void pop(){

          if(top>=0){
               top--;
          }
          else{
            cout<<"Stack Underflow"<<endl;
          }


    }

    int peek(){

           if(top>=0){
               return arr[top];
           }
           else{
              cout<<"Stack is Empty"<<endl;
              return -1;
           }

    }


    bool isEmpty(){

          if(top==-1){
            return true;
          }
          return false;
    }


};

int main(){


    
   Stack st(4);      //created a stack of size 4
//    cout<<st.top<<endl;
   st.push(10);
   st.push(20);
   st.push(30);

   st.pop();
   st.pop();
   st.pop();
   
   cout<<st.peek()<<endl;


    if(st.isEmpty()){
        cout<<"Your stack is empty"<<endl;
    }
    else{
        cout<<"Your stack is not empty"<<endl;
    }









    return 0;
}