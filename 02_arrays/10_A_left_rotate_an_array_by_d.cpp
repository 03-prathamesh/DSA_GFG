#include<bits/stdc++.h>
using namespace std;

void leftRotateBy1(int arr[],int n){
      int temp=arr[0];
      for(int i=1;i<n;i++){
          arr[i-1]=arr[i];
      }
      arr[n-1]=temp;      
}

void leftRotateByD(int arr[],int d,int n){
    for(int i=0;i<d;i++){  //iterate upto the d and rotate every element by 1 upto D.
        leftRotateBy1(arr,n);
    }
}

int main()
{
     int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 2;

      cout<<"Before Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       leftRotateByD(arr, d, n);

       cout<<"After Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
   return 0;
}