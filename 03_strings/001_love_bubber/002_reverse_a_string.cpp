#include<iostream>
#include<string>
using namespace std;

int getLength(char name[]){

     int count=0;

     for(int i=0;name[i]!='\0';i++){

        count++;
     }

     return count;
}


void reverse(char name[]){

     int count=getLength(name);  //you have to write the getlength fuction above this fuctions where you called it 

    int start=0;
    int end=count-1;
    
     
     while(end>start){
         
         int temp=name[start];
        name[start]=name[end];
        name[end]=temp;

        start++;
        end--;
     }

  
}

int main()
{


  char str[10];

  cout<<"enter your name: "<<endl;
  cin>>str;

  cout<<"Your name: "<<str<<endl;

 reverse(str);

  cout<<"reverse of the string is: "<<str<<endl;

   return 0;
}