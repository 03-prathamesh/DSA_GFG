#include<iostream>
using namespace std;

int largest_ele(int arr[],int s){


 int lar=0;
  for(int i=0;i<s;i++){

     if(arr[i]>arr[lar]){

         lar=i;
     }


  }

 return lar;

}

int secLarg(int arr[],int s){

    int largest=largest_ele(arr,s);
    int res=-1;

    for(int i=0;i<s;i++){

        if(arr[i]!=arr[largest]){

               if(res==-1){

                  res=i;
               }
               else if(arr[i]>arr[res]){

                 
                  res=i;

               }
           



        }



    }

 return res;

}



int main()
{
    
int n;
cout<<"enter the size of the array: "<<endl;
cin>>n;

 int arr[n];

 for(int i=0;i<n;i++){

    cout<<"enter the "<<i<<" th element to the arr"<<endl;
    cin>>arr[i];

 }

 int s=sizeof(arr)/sizeof(arr[0]);

 int np=secLarg(arr,s);

 cout<<"the second largest element is : "<<arr[np];

   return 0;
}