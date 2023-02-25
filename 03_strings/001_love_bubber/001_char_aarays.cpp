#include<iostream>
using namespace std;


int getLength(char name[]){

     int count=0;

     for(int i=0;name[i]!='\0';i++){

        count++;
     }

     return count;
}

int main()
{


  char str[10];

  cout<<"enter your name: "<<endl;
  cin>>str;

  cout<<"Your name: "<<str<<endl;


  cout<<"the length of the string is : "<<getLength(str);


   return 0;
}