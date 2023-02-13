#include<iostream>
using namespace std;


bool Prime(int n){

     if(){

         return false;
     }
     
     for(int i=2;i<n;i++){

        if(n%i==0){

            return false;
        }


     }

 return true;


}
int main()
{

int n;
cout<<"Enter the value of n: ";
cin>>n;

 int r=Prime(n);

 cout<<boolalpha;
 cout<<r<<endl;

   return 0;
 }