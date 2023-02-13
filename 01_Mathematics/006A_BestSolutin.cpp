#include <iostream>
using namespace std;

bool IsPrime(int n)
{

    if (n == 1)
    {

        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {

            return false;
        }
    }

    return true;
}

int main()
{

    int n = 10;
    bool r = IsPrime(n);
    cout << boolalpha;
    cout << r << endl;

    return 0;
}