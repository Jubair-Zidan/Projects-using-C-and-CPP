#include <iostream>
using namespace std;

int main()
{

    // break statement

    // int i = 1;

    // while (i <= 10)
    // {
    //     cout << i << " ";
    //     i++;
    //     if (i == 4)
    //     {
    //         break;
    //     }
    // }

    // continue statement

    int i = 1;

    for (i; i <= 10; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}