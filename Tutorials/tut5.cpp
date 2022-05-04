#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter the value of Num1: "<<endl;// '<<' is called insertion operator
    cin>>num1;// '>>' is called extraction opertor
    
    cout<<"Enter the value of Num2: "<<endl;
    cin>>num2;

    cout<<"The sum is: "<<num1+num2;

    return 0;
}