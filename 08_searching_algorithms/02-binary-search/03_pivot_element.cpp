#include<bits/stdc++.h>
using namespace std;
 

int pivotElement(int arr[],int size){

    int s=0;
    int e=size-1;

    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
 
        mid=s+(e-s)/2;
        
    }
    return s;// index of that element

}

int main(){

   int arr[5]={3,8,1,17,18};

   cout<<pivotElement(arr,5);


    return 0;
}