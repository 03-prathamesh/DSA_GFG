#include<iostream>
using namespace std;

int Fact(int n){

  int sum=1;

  for(int i=1;i<=n;i++){


      sum=sum*i;
      // cout<<"hi";

      
  }


 return sum;




}




int main()
{

 int n;
 cout<<"Enter the Value of n: ";
 cin>>n;

 int r=Fact(n);

 cout<<r<<endl;


   return 0;
 }