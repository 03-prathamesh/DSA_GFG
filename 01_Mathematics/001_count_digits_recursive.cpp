#include<iostream>
using namespace std;

 int CountDigits(int n){



       if(n==0){

           return 0;
       }
       else{


           return 1+CountDigits(n/10);
       }
 }



int main()
{


int n;
cout<<"Enter the value of n : ";
cin>>n;

 int r=CountDigits(n);

 cout<<r<<endl;

   return 0;
 }