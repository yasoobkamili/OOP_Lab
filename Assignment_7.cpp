/*
    Assignment 7: Break and Continue with Nested Loops
    Write a program to find and print all pairs (x, y) such that:
    •
    x^2 + y^2 = n
    where n is an input number, and both x and y range from 0 to sqrt(n). Use break and
    continue statements to optimize the solution.
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int input;
    cout<<"Enter any integer: ";
    cin>>input;
    int x,y;
    for(x=0; x<sqrt(input);x++){
        for(y=0; y<sqrt(input);y++){
            if((x*x + y*y ) == input){
                cout<<"("<<x<<", "<<y<<")";
                break;
            }
            else
                continue;
        }
    }
        cout<<endl;
}