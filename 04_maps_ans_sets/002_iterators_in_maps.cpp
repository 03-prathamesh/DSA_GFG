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

    // question -> you have to print frequency of the each element in the vector
    map<int,int>mp; //declaration of the map 
    for(int i=0;i<ans.size();i++){
        mp[ans[i]]=mp[ans[i]]+1;
        // mp[ans[i]]++;
    }
    // iterators in the cpp
    map<int,int>:: iterator it;  //declaration of the iterator
    for(it= mp.begin();it!=mp.end();++it){
        cout<<(*it).first<<"  "<<(*it).second<<" "<<endl;
    }
   return 0;
}