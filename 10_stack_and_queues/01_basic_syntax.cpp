#include<bits/stdc++.h>
#include<stack>     //this is the stl library which is used for stack including its all operations
using namespace std;


int main(){

    // Stack follows LIFO data structure . eg -> plates in each other , how you insert and remove

   //creation of stack
   stack<int>s1;

    //inserting the data into the stack
    s1.push(2);
    s1.push(5);   //push operations


    s1.pop();    //the top element that is 5 will be removed
    // s1.pop();       the pop operation

    cout<<"The top element of the stack is: "<<s1.top()<<endl;


    cout<<"Size of stack is: "<<s1.size()<<endl;


    if(s1.empty()){
        cout<<"Your stack is empty"<<endl;
    }
    else{
        cout<<"Your stack has atleat or greater than one element"<<endl;
    }

    return 0;
}