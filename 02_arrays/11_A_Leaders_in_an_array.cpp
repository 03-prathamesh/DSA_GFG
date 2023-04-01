#include <iostream>
#include <cmath>
using namespace std;

// leader means that element has no greater element in his right.....
// naive (brut-force) method
void leaders(int arr[], int n)
{
	for(int i=0;i<n;i++){
        bool flag =true;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<arr[i]<<" ";
        }
    }
}



int main() {
	
      int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;

      leaders(arr, n);
    
}