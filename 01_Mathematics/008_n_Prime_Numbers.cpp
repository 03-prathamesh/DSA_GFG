#include<iostream>
using namespace std;

  bool isPrime(int n){

      if(n==1){

          return false;
      }
      
      for(int i=2;i<n;i++){



          if(n%i==0){

              return false;
          }


      }


   return  true;


  }

void printPrimes(int n){

    for(int i=2;i<=n;i++){

       if(isPrime(i)){    //if numberr is prime then that function will return true & then this if condition become true then that no will print in output


           cout<<"Prime Number is: "<<i<<endl;
       }

    }



}


int main()
{


int n;
cout<<"Enter the value of n: ";
cin>>n;

// bool r=isPrime(n);
// cout<<boolalpha;
// cout<<r<<endl;

printPrimes(n);
   return 0;
 }