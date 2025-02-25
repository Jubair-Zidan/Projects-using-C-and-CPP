#include <iostream>
using namespace std;

int main()
{
    // Multiplication table

    int i = 1, n, reslt = 0;

    cout << "Input Number: ";
    cin >> n;

    while (i <= 10)
    {
        reslt = n * i;
        cout << n << " " << "*" << " " << i << " " << "=" << " " << reslt << endl;
        i++;
    }

    return 0;
}