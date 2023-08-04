#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size,int key){


     int start=0;
     int end=size-1;

     int ans=-1; //consider temporary value as -1 of ans


     int mid=start+(end-start)/2;
     while(start<=end){
        
        if(arr[mid]==key){
            ans=mid;
            end=end-1;
        }
        else if(arr[mid]<key){
            start=mid+1; 
        }
        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
     }

   return ans;
}

int lastOccurence(int arr[],int size,int key){


     int start=0;
     int end=size-1;

     int ans=-1; //consider temporary value as -1 of ans


     int mid=start+(end-start)/2;
     while(start<=end){
        
        if(arr[mid]==key){
            ans=mid;
            // end=end-1;
            start=mid+1;// right side la jayche
        }
        else if(arr[mid]<key){
            start=mid+1; 
        }
        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
     }

   return ans;

}
int main(){

 
   int even[6]={1,0,3,3,3,9};
   int odd[5]={1,3,3,4,3};

   cout<<"First occurence of key element in this array is: "<<firstOccurence(even,6,3);
   cout<<endl;
   cout<<"last occurence of key element in this array is: "<<lastOccurence(even,6,3);
  

    return 0;
}