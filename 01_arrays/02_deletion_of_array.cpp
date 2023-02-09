#include<iostream>
using namespace std;


int delete_fun(int arr[],int n,int x){


  int i;
  for( i=0;i<n;i++){


       if(arr[i]==x){
           
              break;

       }

  }

 if(i==n){

    return n;
 }

  for(int j=i;j<n-1;j++){

     arr[j]=arr[j+1];  
  }

return n-1;

}




int main()
{

 int num;
 cout<<"enter the size of the array";
 cin>>num;

 int array1[num];

 for(int i=0;i<num;i++){

      cout<<"enter the element into the array: "<<endl;
      cin>>array1[i];
 }

 int n=sizeof(array1)/sizeof(array1[0]);
//  cout<<"size: "<<n;
 int t;
 cout<<"enter the element which you want to delete from the array: "<<endl;
 cin>>t;


 int p=delete_fun(array1,n,t);


 for(int i=0;i<p;i++){

     cout<<array1[i]<<" ";
 }
    
   return 0;
}