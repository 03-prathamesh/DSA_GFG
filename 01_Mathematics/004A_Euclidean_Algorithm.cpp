// Euclidean  Alogorithm For GCD
#include <iostream>
using namespace std;

int GCD(int p, int q)
{

    while (p != q)  // this for loop will run upto a & b values not becomes true.
    {

        if (p > q)
        {

            p = p - q;
        }
        else
        {

            q = q - p;
        }
    }

    return p;
}

int main()
{

    int a = 12, b = 15;

    int r = GCD(a, b);
    cout << r << endl;

    return 0;
}