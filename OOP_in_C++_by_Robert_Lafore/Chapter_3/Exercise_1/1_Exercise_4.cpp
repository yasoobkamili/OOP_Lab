/*
Create the equivalent of a four-function calculator. The program should ask the user to
enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or divid-
ing the two numbers. Use a switch statement to select the operation. Finally, display the
result.
When it finishes the calculation, the program should ask whether the user wants to do
another calculation. The response can be ‘y’ or ‘n’. Some sample interaction with the
program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
*/

#include<iostream>
using namespace std;
int main(){

    float x,y;
    float result;
    char o,p;
    
    
    do{

        cout<<"Enter first number, operator(+  ,  -  ,  *  ,  /), second number:\n";
        cin>>x>>o>>y;
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
        cout<<"Do another (y/n)?";
        cin>>p;
        if(p=='n')
            return 0;
        
    }while(p =='y');

    return 0;
}