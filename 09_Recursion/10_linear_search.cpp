// check if array is sorted or not using recursion 
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size, int key){

      if(size==0){
        return false;
      }
      
      if(arr[0]==key){
        return true;
      }

      return isSorted(arr+1,size-1,key);

}

int main(){

    int n;
    cout<<"Enter the size of your array: "<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key=12;

    bool ans=isSorted(arr,n,key);
    cout<<ans<<endl;


    return 0;
}