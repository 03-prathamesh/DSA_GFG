#include<iostream>
using namespace std;

int rec_sum(int n){


     if(n==0){
        return 0;
     }

     return rec_sum(n-1)+n; 
}

int main(){


   int n;
   cout<<"enter the number: "<<endl;
   cin>>n;

   cout<<rec_sum(n);


    return 0;
}