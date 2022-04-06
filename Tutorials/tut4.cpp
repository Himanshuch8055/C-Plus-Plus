#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo<<endl;
}

int main(){
    int glo=9;
    glo=75;
    int a=4;
    int b=5;
    float pi=3.14;
    char c='H';
    bool d=true;
    bool e=false;
    sum();

    cout<<glo<<endl;
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
    cout<<"value of pi is: "<<pi<<endl;
    cout<<"value of c is: "<<c<<endl;
    cout<<"value of d is: "<<d<<endl;
    cout<<"value of e is: "<<e<<endl;

    return 0;
}