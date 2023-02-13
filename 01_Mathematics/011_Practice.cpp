#include <iostream>
using namespace std;

bool isPallindrome(int n)
{

    int patty = n;
    int palt = 0;

    while (patty > 0)
    {

        int rushy = patty % 10;
        palt = palt * 10 + patty;
        patty = patty / 10;
    }

    return (palt == n); 
}

int main()
{

    int n = 1553;
    bool r = isPallindrome(n);

    cout << boolalpha;

    cout << r << endl;
    return 0;
}