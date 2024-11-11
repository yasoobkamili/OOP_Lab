/*
    Program4: switch Statement for Days of the Week
    Write a program that takes a number between 1 and 7 from the user and uses a switch statement
    to print the corresponding day of the week (1 for Monday, 2 for Tuesday, etc.). Print "Invalid
    input" if the number is not between 1 and 7.
*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter day number from 1 to 7:\n";
    cin>>x;
    switch(x){
        case 1: cout<<"It's Monday\n"; break;
        case 2: cout<<"It's Tuesday\n"; break;
        case 3: cout<<"It's Wednesday\n"; break;
        case 4: cout<<"Its Thursday\n"; break;
        case 5: cout<<"Its Friday\n"; break;
        case 6: cout<<"Its Saturday\n"; break;
        case 7: cout<<"Its Sunday\n"; break;
        default: cout<<"Invalid input\n"; break;
    }

    return 0;
}    