// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, n;
//     cin >> n;

//     while (i <= n)
//     {
//         cout << i << endl;
//         i++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n, r, j;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= i; j++)
        {

            if (j % 3 != 0)
            {
                cout << j;
            }
        }
    }

    return 0;
}