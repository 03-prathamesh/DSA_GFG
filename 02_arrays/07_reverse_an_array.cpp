#include<iostream>
using namespace std;



void reverseArray(int arr[],int s){

      int low=0;
      int high=s-1;

      while(low<high){

        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;

        low++;
        high--;

         }

         
for(int i=0;i<s;i++){


      cout<<arr[i]<<" ";
  }

  
}



int main()
{
    int a[5];  //array deeclaration of size 5
   
   int cap=sizeof(a)/sizeof(a[0]);

//  cout<<n<<endl;

   for(int i=0;i<cap;i++){

        cout<<"enter the element of the array"<<endl;
        cin>>a[i];
   }


  reverseArray(a,cap);



   return 0;
}