#include<iostream>
using namespace std;



int CountDigits(int s){
  int sum=0;
  
  
  while(s>0){

       s=s/10;

      sum++;
  }

 return sum;

}
int main()
{



    int p;
    cout<<"Enter The Value of P: ";
    cin>>p;


 int r=CountDigits(p);
 cout<<r<<endl;


   return 0;
 }