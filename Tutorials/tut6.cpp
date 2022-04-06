// there are two types of header file 

// 1.system header file --> it comes with the compiler
#include<iostream>
// 2.user defined header file --> it is written by the programmer
#include "this.h"

using namespace std;

int main(){
    int a=4, b=5;
    //operators in c++

    // 1. arithmetic operators
    cout<<"The value of a+b: "<<a+b<<endl;
    cout<<"The value of a-b: "<<a-b<<endl;
    cout<<"The value of a*b: "<<a*b<<endl;
    cout<<"The value of a/b: "<<a/b<<endl;
    cout<<"The value of a%b: "<<a%b<<endl;
    cout<<"The value of a++: "<<a++<<endl;
    cout<<"The value of a--: "<<a--<<endl;
    cout<<"The value of ++a: "<<++a<<endl;
    cout<<"The value of --a: "<<--a<<endl;

    cout<<endl;

    // 2. assignment opertors --> used to assign value to variables
    // int a=3, b=9
    // char d='e'


    // 3.comparion operators
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;

    cout<<endl;

    // 4.logical operators
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;


    return 0;
}