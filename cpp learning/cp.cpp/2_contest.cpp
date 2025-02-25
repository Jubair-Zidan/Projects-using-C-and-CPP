#include <iostream>
using namespace std;

int main()
{

    // find out those numbers which are not divisible by 3 and doesn't contain any number which last digit is 3

    int n, r, j;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= i; j++)
        {

            if (j % 3 != 0)
            {
                r = j;
                r = j % 10;
                if (r != 3)
                {
                    cout << j << "\n";
                }
            }
        }
    }

    return 0;
}