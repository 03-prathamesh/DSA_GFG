// check if array is sorted or not using recursion 
#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int size){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<"  "; 
    }
    cout<<endl;
}
 
bool isSorted(int arr[], int size, int key){
      
      print(arr,size);
      if(size==0){
        return false;
      }
      
      if(arr[0]==key){
        return true;
      }

      return isSorted(arr+1,size-1,key);

}

int main(){

    // int n;
    // cout<<"Enter the size of your array: "<<endl;
    // cin>>n;

    // int arr[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int n=5;
    int arr[n]={20,7,12,30,34};

    int key=0;

    bool ans=isSorted(arr,n,key);
    // cout<<ans<<endl;
    if(ans){
       cout<<"PRESENT"<<endl;
    }
    else{
      cout<<"ABSENT"<<endl;
    }


    return 0;
}