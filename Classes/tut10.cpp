#include <iostream>
using namespace std;

int main()
{
    /* Loop in c++
    There are three types of loop in c++:
        1. For loop 
        2. While loop
        3. Do-while loop
     */

    /* syntax for for loop
    for (initialization; condition; updation)
    {
        loop body(C++ code)
    }*/

    //For Loop in C++
    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    //infinite for loop
    // for (int i = 1; 35 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    //while loop in c++
    // syntax for while loop
    // while ( condition )
    // {
    //     c++ code
    // }
    // int i=1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    //infinite for while
    //    int i=1;
    //     while (true)
    //     {
    //         cout<<i<<endl;
    //         i++;
    //     }

    //do-while loop in c++
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=40);
    
    return 0;
}