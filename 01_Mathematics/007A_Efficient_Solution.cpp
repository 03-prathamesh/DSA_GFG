#include <iostream>
using namespace std;

void PrinDiv(int n)
{
int i;
    for ( i = 1; i*i<n; i++)
    {

        if (n % i == 0)
        {

            cout << i << endl;
        }
    }

    
    for (; i >= 1; i--)
    {

        if (n % i == 0)
        {
            cout << n / i << endl;
        }
    }
}

int main()
{

    int n = 15;
    PrinDiv(n);

    return 0;
}