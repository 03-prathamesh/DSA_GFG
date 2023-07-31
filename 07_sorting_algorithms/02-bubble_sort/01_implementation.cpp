#include<bits/stdc++.h>
using namespace std;


int main(){


  int n;
  cout<<"Enter the size of your array"<<endl;
  cin>>n;


  int arr[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
 

  //implement the bubble sort
  for(int i=0;i<n-1;i++){
       
       bool swapped=false;  // checking if whole arr is sorted or not before doing anything
       for(int j=0;j<n-i-1;j++){
         
            
             if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                swapped=true;
             }


           
       }

       if(swapped==false){
          break;
       }
  }


   //printing the sorted array which has sorted by the bubble sort
   for(auto x:arr){
    cout<<x<<" ";
   }
    return 0;
}