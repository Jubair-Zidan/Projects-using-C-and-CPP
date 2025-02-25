#include <iostream>
using namespace std;

int main()
{
    int n, num, cubesum = 0, lastdig;
    cin >> n;

    num = n;

    while (num > 0)
    {
        lastdig = num % 10;
        cubesum += lastdig * lastdig * lastdig;
        num /= 10;
    }

    if (n == cubesum)
    {
        cout << "Armstrong number\n";
    }
    else
    {
        cout << "NOT an Armstrong number\n";
    }

    return 0;
}
