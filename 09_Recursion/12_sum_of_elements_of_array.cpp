#include<bits/stdc++.h>
using namespace std;

int sumOfEle(int arr[],int size){

    if(size==0){
        return 0;
    }

    int remainingpart=sumOfEle(arr+1,size-1);
    int sum=arr[0]+remainingpart;
    return sum;
}

int main(){


 int arr[5]={3,2,5,1,6};
 int size=5;
 int ans=sumOfEle(arr,size);
 cout<<"Sum of element of array using recursion is: "<<ans<<endl;

    return 0;
}