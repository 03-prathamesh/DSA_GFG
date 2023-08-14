//lets implement binary search using recursion 
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int start, int end){
    //  print the elements of the array
   
    //  if(end<start){
    //     return;
    //  }

    //  cout<<arr[0]<<" ";
    //  print(arr+start,start,end-1);
     
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
}

bool binary_search(int *arr,int start,int end,int key){

      print(arr,start,end);
     
      //basse case
      if(start>end){
       return false;
      }
      
      int mid=start+(end-start)/2;

      if(arr[mid]==key){
        return true;
      }

      if(arr[mid]<key){
         start=mid+1;
         binary_search(arr,start,end,key);
      }
      else{
        end=mid-1;
        binary_search(arr,start,end,key);
      }
}

int main(){

    int arr[5]={4,7,9,12,19};
    int k=12;
    bool ans=binary_search(arr,0,4,k);
    
    if(ans){
        cout<<"PRESENT"<<endl;
    }
    else{
        cout<<"ABSENT"<<endl;
    }



    return 0;
}