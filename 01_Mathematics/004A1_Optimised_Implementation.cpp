// Eucledian algorithm using recursion

#include <iostream>
using namespace std;

int GCD(int a, int b)
{

    if (b == 0)
    {

        return a;
    }
    else
    {

        return GCD(b, a % b); // function calling ( this return value will be returned to function definition parameters)
                              // recursive calls
    }
}

int main()
{

    int a = 12, b = 15;

    int r = GCD(a, b);

    cout << r << endl;

    return 0;
}