#include <iostream>
using namespace std;

int main()
{
    // Income tax Calcutor
    // income<5lakh -> 0%
    // income>5lakh and income<10lakh -> 20%
    // income>10lakh -> 30%

    int income;
    float tax;
    cout << "Enter amount (In lakh)= ";
    cin >> income;

    if (income < 5)
    {
        tax = income * 0;
    }
    else if (income <= 10)

    {
        tax = income * .2;
    }
    else
    {
        tax = income * .3;
    }
    cout << "Tax= " << (tax * 100000) << endl;

    return 0;
}