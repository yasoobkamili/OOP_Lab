/*
Program5: switch Statement for Basic Calculator
Write a program that takes two integers and a character representing an operation (+, -, *, /) as
input from the user and uses a switch statement to perform the appropriate arithmetic operation
and print the result.
*/

#include<iostream>
using namespace std;
int main(){

    int x,y;
    double result;
    char o;
    cout<<"Enter first integer.\n";
    cin>>x;
    cout<<"Enter second integer.\n";
    cin>>y;
    cout<<"Select one option from :\n+  ,  -  ,  *  ,  /\n";
    cin>>o;
    switch(o){
        case '+':   
            result = x + y;
            cout<<"Result is : "<<result<<'\n';
            break;

        case '-':
            result = x - y;
            cout<<"Result is : "<<result<<'\n';
            break;

        case '*':
            result = x*y;
            cout<<"Result is : "<<result<<'\n';
            break;

        case '/':
            result = (double)x/y;
            cout<<"Result is : "<<result<<'\n';
            break;

        default:
            cout<<"Invalid choice\n";
            break;
    }

    return 0;
}