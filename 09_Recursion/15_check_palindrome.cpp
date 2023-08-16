#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str,int start,int end){
      
      if(start>end){
        return true;
      }

      if(str[start]!=str[end]){
        return false;
      }
      //recursive call
      return isPalindrome(str,start+1,end-1); //here start++ and end-- will not work  directly in the recursive call parameter

}

int main(){


   string str ="BookkooB";
   bool ans=isPalindrome(str,0,str.size()-1);
   if(ans){
    cout<<"Your string is palindrome"<<endl;
   }
   else{
    cout<<"Your string is not palindrome"<<endl;
   }

    return 0;
}