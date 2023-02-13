#include<iostream>
using namespace std;

void Fact(int n){

   int patty=1;

   for(int i=1;i<=n;i++){


        patty=patty*i;


   }


  cout<<patty<<endl;



}





int main()
{

int n=5;
Fact(n);

   return 0;
 }