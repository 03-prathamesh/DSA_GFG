#include<iostream>
using namespace std;



void ToUpper(char a[]){

  for(int i=0;a[i]!='\0';i++){

     a[i]=a[i]-32;

  }
}

void ToLower(char a[]){

  for(int i=0;a[i]!='\0';i++){

      a[i]=a[i]+32;

  }



}



int main()
{
    
  char str[10];

  cout<<"enter your name: "<<endl;
  cin>>str;

//   cout<<"Your name: "<<str<<endl;


//   ToUpper(str);

//     cout<<str;

//   for(int i=0;str[i]!='\0';i++){

//       if(str[i]>='A' && str[i]<='z'){

//         ToUpper(str);
//         break;
//       }
      
//   }

//    for(int i=0;str[i]!='\0';i++){

//       if(str[i]>='a' && str[i]<='z'){

//         ToLower(str);
//         break;
//       }
      
//   }

// how to toggle the keys

 for(int i=0;str[i]!='\0';i++){

     if(str[i]>=65 && str[i]<=90){
        str[i]=str[i]+32;
     }
     else if(str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
     }
 }

  cout<<str;

   return 0;
}