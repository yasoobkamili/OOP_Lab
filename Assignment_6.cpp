/*
    Assignment 6: Do-While with Number Reversal
    Write a program that repeatedly asks the user to input a positive integer and then reverses the
    digits of the number. For example, input 1234 should output 4321. Stop the program when the
    user enters 0.
*/
#include<iostream>
using namespace std;
int main(){
    int input;
    do{
        cout<<"Enter any positive integer: ";
        cin>>input;
        while(input != 0){
            cout<<input%10;
            input /= 10;
        }
        cout<<endl;
    }
    while(input!=0);
}