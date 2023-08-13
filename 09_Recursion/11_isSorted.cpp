#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size){

  //base case.
  if(size==0 || size==1){
     return true;
  }
  
  if(arr[0]>arr[1]){
    return false;
  }
  else{
   bool remainingPart= isSorted(arr+1,size-1);  //recursively called function with changes in array size
   //here arr+1 means arr[0] will be pointing to the next element of array . and other elements accordingly
   return remainingPart;
  }
}

int main(){

 int n;
 cout<<"Enter the size of your array"<<endl;
 cin>>n;

    int arr[n]; //declaration of the array

 for(int i=0;i<n;i++){
    cin>>arr[i];
 }


 bool ans=isSorted(arr,n);
 if(ans){
    cout<<"your array is sorted"<<endl;
 }
 else{
    cout<<"Your array is not sorted"<<endl;
 }

    return 0;
}