// Assume that you want to generate a table of multiples of any given number. Write a pro-
// gram that allows the user to enter the number and then generates the table, formatting it
// into 10 columns and 20 lines. Interaction with the program should look like this (only the
// first three lines are shown):
// Enter a number: 7

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any integer: ";
    cin>>n;
    for(int i=1; i<=200; i++){
        int result = n*i;
        cout<<result<<"\t";
        if(i%10==0)
            cout<<endl;
    }
    return 0;
}
