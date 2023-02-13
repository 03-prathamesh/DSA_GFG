#include<iostream>
using namespace std;

int CountDigits(int n){

int s;
  int count=0;

  while(n!=0){

       n=n/10;
       count++;
  }

// cout<<n<<endl;//  imp rule if this statement will below return,then this statement will not be print in output
 return count;
 

}


int main()
{

 int a=3556;

 int r=CountDigits(a);

 //cout<<r<<endl;
   return 0;
 }