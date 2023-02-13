#include<iostream>
using namespace std;


int search_funct(int arr[],int n,int x){

   for(int i=0;i<n;i++){

        if(arr[i]==x){

            return i;
        }

        
   }


 return -1;


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

 int x;
 cout<<"enter the element which you want to be search: "<<endl;
 cin>>x;


 int p=search_funct(array1,n,x);

  cout<<"The index of the element is : "<<p<<endl;

   return 0;
}