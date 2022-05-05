#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter 1 for even number:- " << endl;
    cout << "Enter 2 for Odd numeber:- " << endl;
    cout << "Enter:- ";
    cin >> number;
    switch (number)
    {
    case 1:
        int a;
        cout << "How many number do you want to print:- ";
        cin >> a;

        for (int i = 0; i <= a; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }

        break;

    case 2:
        int b;
        cout << "How many number do you want to print:- ";
        cin >> b;
        for (int i = 0; i <= b; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << endl;
            }
        }
        break;

    default:
        break;
    }
    return 0;
}