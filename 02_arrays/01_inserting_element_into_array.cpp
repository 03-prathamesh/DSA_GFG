#include<iostream>
using namespace std;


int fun(int arr[],int n, int pos,int x, int cap,int po){


       if(cap==n){

        return n;
       }
  
     int idx=po-1;

     for(int i=cap-1;i>=idx;i--){


          arr[i+1]=arr[i];

     }

   arr[idx]=x;


for(int i=0;i<cap;i++){

    cout<<arr[i]<<" ";
}

   return x;

}

int main()
{
    int n=5;
    // cout<<"enter the size of the array";
    // cin>>n;

    int a[5];  //array deeclaration of size 5
   int s=4;   //array has 4 elements 
   int cap=sizeof(a)/sizeof(a[0]);

//  cout<<n<<endl;

   for(int i=0;i<cap-1;i++){

        cout<<"enter the element of the array"<<endl;
        cin>>a[i];
   }

   
    int pos;
    cout<<"enter the position in which you want to insert the element ";
    cin>>pos;


 int call=fun(a,s,4,40,cap,pos); //function call
   
   return 0;
}
