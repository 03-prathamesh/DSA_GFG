#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>ans;

    for(int i=0;i<5;i++){
        int n;
        cout<<"Enter the element into the vector: ";
        cin>>n;
        ans.push_back(n);
    }

    // question -> you have to print the element ans its index
    map<int,int>mp; //declaration of the map 
    for(int i=0;i<ans.size();i++){
        mp[ans[i]]=i;
    }
    // traversing throught the map 
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<" "<<endl;
    }

   return 0;
}