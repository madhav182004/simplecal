#include<iostream>
using namespace std;
int main()
{
    double n1,n2;
    char ch;
    cout<<"Enter the operation to perform ('+','-','*','/') : "<<endl;
    cin>>ch;
    cout<<"Enter two numbers : "<<endl;
    cin>>n1;
    cin>>n2;
    switch(ch)
    {
        case '+':
        cout<<"Addition : "<<n1+n2<<endl;
        break;
        case '-':
        cout<<"Substraction : "<<n1-n2<<endl;
        break;
        case '*':
        cout<<"Multiplication : "<<n1*n2<<endl;
        break;
        case '/':
        cout<<"Division : "<<n1/n2<<endl;
        break;
        default:
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}