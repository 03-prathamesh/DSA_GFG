#include<iostream>
using namespace std;


bool isSorted(int arr[], int n){


  for(int i=1;i<n;i++){

        if(arr[i-1]>arr[i]){

            return false;
        }

       }


  

 return true;

}






int main()
{
    int arr[5]={0,0,0,13,12};

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