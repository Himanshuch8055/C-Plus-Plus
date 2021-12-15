#include<iostream>
using namespace std;

int c=40;

int main(){
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    c=a+b;
    cout<<"the sum of: "<<c<<endl;
    cout<<"the global c is: "<<::c<<endl;

    cout<<endl;

    float d=34.4f;
    long double e=34.4l;
    cout<<"The value d is: "<<d<<endl;
    cout<<"The value e is: "<<e<<endl;

    cout<<endl;

    cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;


    //************Typecasting**************
    int f=45;
    float g=45.56;
    cout<<"The value of f is: "<<(float)f<<endl;
    cout<<"The value of g is: "<<(int)g<<endl;


    return 0;
}