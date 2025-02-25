#include <iostream>
using namespace std;

int main()
{
    int i, n, fac = 1;

    cout << "enter number: " << endl;
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        fac = fac * i;
    }
    cout << fac;
    return 0;
}