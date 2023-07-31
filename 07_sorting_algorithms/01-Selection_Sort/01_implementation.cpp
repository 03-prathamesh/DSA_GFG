#include<bits/stdc++.h>
using namespace std;

int main(){
  

  vector<int>v1;
  int n;
  cout<<"Enter the size of the vector: "<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v1.push_back(a);
  }


  for(int i=0;i<v1.size()-1;i++){
       int key=i;
       for(int j=i+1;j<v1.size();j++){
            if(v1[j]<v1[key]){
                key=j;          
            }


       }
      
         int temp=v1[key];
            v1[key]=v1[i];
            v1[i]=temp;

        

  }

  for(auto x:v1){
    cout<<x<<"  ";
  }



    return 0;
}