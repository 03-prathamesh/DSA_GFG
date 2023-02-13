// Time complexity of this Solution is O(n).
#include<iostream>
using namespace std;

bool IsPrime(int n){

    if(n==1){

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
  cout<<"Enter The Value of n: "<<endl;
  cin>>n;



  bool r=IsPrime(n);
  cout<<boolalpha;   //this will print bool 0 as false and  1 as true
  cout<<r<<endl;

   return 0;
 }