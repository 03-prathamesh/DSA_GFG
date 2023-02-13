#include<iostream>
#include<cmath>
using namespace std;

int GCD(int a,int  b){


    int res=fmin(a,b);

   while(res>0){

      if(a%res==0 && b%res==0){


          break;

          
      }

       res--;

   }
    return res;

}



int main()
{


int n,p;
cout<<"Enterr  the Number of n& p: "<<endl;
cin>>n>>p;

 int r=GCD(n,p);
 cout<<r<<endl;


   return 0;
 }