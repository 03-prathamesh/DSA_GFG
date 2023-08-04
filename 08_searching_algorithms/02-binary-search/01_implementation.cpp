#include<bits/stdc++.h>
using namespace std;


 int binarySearch(int arr[],int key, int size){

      //lets implement the binary search code now

      int start=0;
      int end=size-1;
       
      int mid=(start+end)/2;  //use mid=start+(end-start)/2;   for not integer overflow

      while(start<=end){
            
            if(arr[mid]==key){
                return mid;
            }

            if(key>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

            mid=(start+end)/2;
      }
      //if element is not present then return -1;
      return -1;
 }

int main(){


    int even[4]={4,40,42,67};
    int odd[5]={12,26,29,39,78};

    int index=binarySearch(even,4,4);
    cout<<index;

    return 0;
}