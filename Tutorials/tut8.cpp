#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 55;
    cout<<"The value of a was: "<<x<<endl;
    x = 66;
    cout<<"The value of a is: "<<x<<endl;

    //constants in c++
    // const int x = 77;
    // cout<<"The value of a was: "<<x<<endl;
    // x = 88;
    // cout<<"The value of a is: "<<x<<endl;

    //manipulators in c++
    int a = 3, b = 56, c = 1234;
    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;

    cout << "The value of a is: " << setw(4) << a << endl;
    cout << "The value of b is: " << setw(4) << b << endl;
    cout << "The value of c is: " << setw(4) << c << endl;

    // operator precedence
    int d = 3, e = 4;
    int f = ((((d * 5) + e) - 45) + 97);
    cout << "The value of f: " << f << endl;

    return 0;
}