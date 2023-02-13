#include<iostream>
using namespace std;



int Power(int a,int b){


    int  res=1;

    for(int  i=1;i<=b;i++){

         res=res*a;

    }

    return res;
}



int main()
{

 int n,x;

 cout<<"Enter No And Power of Number: ";
 cin>>n>>x;

 int r=Power(n,x);
 cout<<r<<endl;

   return 0;

 }