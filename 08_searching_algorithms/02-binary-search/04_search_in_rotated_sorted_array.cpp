#include<bits/stdc++.h>
using namespace std;

//lets get pivot element by the following function
int getPivot(vector<int>&arr){

       int s=0;
       int e=arr.size();

       int mid=s+(e-s)/2;
        while(s<e){
            
             if(arr[mid]<arr[0]){
                e=mid;
             }
             else{
                s=mid+1;
             }
             mid=s+(e-s)/2;

        }

        return s;

}

int b_s(vector<int>&arr , int start, int end, int key){
     

       int mid=start+(end-start)/2;
       while(start<=end){
             
             if(arr[mid]==key){
                return mid;
             }

             if(arr[mid]>key){
                start=mid+1;
             }
             else{
                end=mid-1;
             }
       }
       return -1;
}


int main(){

 vector<int>nums={4,5,6,7,0,1,2};
 int key=0;

 int pvt=getPivot(nums);
 if(key>=nums[pvt] && key<=nums[nums.size()-1]){
      cout<<"the index of the search element is: "<<b_s(nums,pvt,nums.size()-1,key);
 }
 else{
   
    cout<<"the index of the search element is: "<<b_s(nums,0,pvt-1,key)<<endl;
 }

 



    return 0;
}