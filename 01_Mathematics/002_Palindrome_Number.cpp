#include<iostream>
using namespace std;

bool isPal(int n){

   int rev=0;

   int temp=n;

   while(temp!=0){


       int id=temp%10;
       rev=rev*10+id;
       temp=temp/10;
   }

  return (rev==n);


}
int main()
{

 int n;
 cout<<"Enter the value of n: ";
 cin>>n;

 int r=isPal(n);

 cout<<r<<endl;



   return 0;
 }