#include<bits/stdc++.h>
using namespace std;

void rev(int start,int end, string &s){

      //lets display each function call of the recursive functionn
    cout<<s<<endl;


      if(start>end){
        return;
      }

      char temp=s[start];
      s[start]=s[end];
      s[end]=temp;

      start++;
      end--;

     rev(start,end,s);
    
     
}

int main(){



 string str ="bubber";
 
rev(0,str.size()-1,str); //function call
// string str after  reversing is : 
 cout<<str<<endl;


    return 0;
}