#include<iostream>
using namespace std;

int main ()
{
    int a;
    cout<<"Enter the Number do you want to Print table:- ";
    cin>>a;

    for (int i = 1; i<= 10; i++)
    {
        cout<<a*i<<endl;
    }

    int b;
    cout<<"Enter the Number do you want to Print table:- ";
    cin>>b;

    for (int i = 10; i >= 1; i--)
    {
        cout<<b*i<<endl;
    }
    

    return 0;
}