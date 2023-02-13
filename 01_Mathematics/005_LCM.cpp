#include <iostream>
#include <cmath>
using namespace std;

int LCM(int a, int b)
{

    int result = fmax(a, b);
    while (true)   // while(1);   //we can also write like this.
    {
        if (result % a == 0 && result % b == 0)   // if remainder ==0 then condition will false.
        {

            return result;
        }
        else
        {

            result++;
        }

      
    }
      return result;
}

int main()
{

    int a = 4, b = 6;

    int r = LCM(a, b);
    cout<<r<<endl;

    return 0;
}