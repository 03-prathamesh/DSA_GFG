#include<iostream>
using namespace std;

// efficient approach or solution

int largest_ele(int arr[],int n){

    int res=0;

    for(int i=1;i<n;i++){

         if(arr[i]>arr[res]){

            res=i;
         }
    }
 return res;

}





// int largest_ele(int arr[],int n){


//  for(int i=0;i<n;i++){

//     bool c=false;

//     for(int j=0;j<n;j++){

//         if(arr[j]>arr[i]){

//             c=true;
//             break;
//         }

//     }

//     if(c==false){

//         return arr[i];
//     }


//  }

// }




int main()
{
    
    int arr[4]={5,8,2,8};

    int n=sizeof(arr)/sizeof(arr[0]);

    int p=largest_ele(arr,n);

    cout<<"positio of the largest element is: "<<p<<endl;

   return 0;
}