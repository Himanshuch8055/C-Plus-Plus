#include<iostream>
using namespace std;

int main ()
{
    // What is a Pointer?
    int a = 3;
    int* b = &a;

    // '&' ----> (Address of Opertor)
    cout<<"The Address of a is: "<<&a<<endl;
    cout<<"The Address of a is: "<<b<<endl;

    // '*' ----> (Value at) Dereference Opertor
    cout<<"The vlaue at Address b is: "<<*b<<endl;

    //Pointer to Pointer
    int** c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at (value_at(c)) is: "<<**c<<endl;

    return 0;
}