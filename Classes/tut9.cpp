#include <iostream>
using namespace std;

int main()
{
    // cout<<"hello world";
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;
    //selection control structure: if, else-if, else ladder
    if ((age < 18) & (age > 0))
    {
        cout << "You can not come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "You are a kid and you will get a kid pass to the party" << endl;
    }
    else if (age < 1)
    {
        cout << "You are not yet born" << endl;
    }
    else
    {
        cout << "You can come to the party" << endl;
    }

    //selection control structure: switch case statements
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;

    case 22:
        cout << "You are 22" << endl;
        break;

    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }

    return 0;
}