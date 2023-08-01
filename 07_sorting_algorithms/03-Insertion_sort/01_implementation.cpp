#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cout<<"Enter the size of your array: ";
  cin>>n;


  int arr[n];  //declaration  of array


  for(int i=0;i<n;i++){
    cin>>arr[i];   //taking array input
  }

   
  //lets implement the code for INSERTION SORT

  for(int i=1;i<n;i++){
     int temp=arr[i];
     int j=i-1;//scope of this value j is under the i the for loop 
     for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
     }
     arr[j+1]=temp;
  }


 //lets print the sorted array
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }

 cout<<endl;



    return 0;
}