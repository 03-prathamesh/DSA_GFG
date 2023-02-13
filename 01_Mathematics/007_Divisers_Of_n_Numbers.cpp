#include<iostream>
using namespace std;

void   div(int n){

int sum=0;
  for(int i=1;i<=n;i++){


      if(n%i==0){   //remember any numer cannot devided by 0

          cout<<i<<endl;
         //sum++;
      }
  }

 //return sum;


}


int main()
{

int  n=15;
div(15);

   return 0;
 }