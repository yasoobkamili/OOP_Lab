// Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
// calculates its factorial, until the user enters 0, at which point it terminates. You can
// enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
// effect.

#include<iostream>
using namespace std;
int main(){
    int n;
    long long int result=1;
    do{
        cout<<"Enter integer to calculate factorial: ";
        cin>>n;
        if(n==0)
            cout<<"Factorial of 0 is 1\n";
        else{
            for(int i=1;i<n;i++){
                result += result*i; 
            }
        }
        cout<<"Factorial of "<<n<<" is "<<result<<endl;
    }
    while(n!=0);
}