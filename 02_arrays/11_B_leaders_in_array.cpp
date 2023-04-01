#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// leader means that element has no greater element in his right.....
// O(n) time complexity
void rev(int ans[],int n){
   reverse(ans,ans+n);
}


void leaders(int arr[], int n)
{
    int ans[]; //how to created a dynamic array for storing the leading arrays
    int curr_leader=arr[n-1];
    ans[0]=curr_leader;
	for(int i=n-2;i>=0;i--){
       if(arr[i]>curr_leader){
           curr_leader=arr[i];
           ans[i]=arr[i];
       }
    }
    rev(ans,n);
    int s=sizeof(ans)/sizeof(ans[0]);
    for(int i=0;i<s;i++){
        cout<<ans[i]<<" ";
    }
}



int main() {

	 
      int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;
  
      leaders(arr, n);
    
}