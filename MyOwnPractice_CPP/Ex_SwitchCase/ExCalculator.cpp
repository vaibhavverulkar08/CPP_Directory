// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() {
    char oper;
    int num1,num2;

    cout<<"Enter Operation: + ,-,* ,/ ";
    cin>>oper;

    cout<<"Enter any two Number";
    cin>>num1>>num2;

    
    switch (oper)
    {
    case '+': cout<<"sum of Two number is :" <<num1 <<"+" <<num2 <<"=" <<num1+num2;
        break;
    case '-': cout<<"Substraction of two number is:" <<num1 <<"-" <<num2 <<"=" <<num1-num2;
        break;
    case '*': cout<<"Multiplication of two number is:"<<num1 <<"*" <<num2 <<"="  <<num1*num2;
        break;
    case '/':
        break;cout<<"Multiplication of two number is:" <<num1 <<"/" <<num2 <<"="  <<num1/num2;
    
    default:cout<<"you choosen the Invalid Operation";
        break;
    }

    return 0;
}