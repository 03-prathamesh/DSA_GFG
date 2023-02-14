#include<iostream>
using namespace std;


bool isSorted(int arr[], int n){


  for(int i=0;i<n-1;i++){

       for(int j=i+1;j<n;j++){

           if(arr[j]<arr[i]){

               return false;
           }
       }


  }

 return true;

}






int main()
{
    int arr[5]={0,0,0,10,12};

    int s=sizeof(arr)/sizeof(arr[0]);

   bool final=isSorted(arr,s);

 if(final){

     cout<<"your array is sorted";
 }
 else{

      cout<<"your array is not sorted";
 }

   return 0;
}