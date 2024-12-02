/*
    create a simple calculator using switch statement and functions
*/
#include<iostream>
using namespace std;
int add(int x, int y){
    int sum = x + y;
    return sum;
}
int subtract(int x ,int y){
    int difference = x-y;
    return difference;
}
int multiply(int x , int y ){
    int product = x*y;
    return product;
}
double divide(int x , int y){
    double result;
    if(y=0){
        cout<<"Invalid denominator.";
    }
    else    
        result = (float)x/y;
    return result;
}
int modulo(int x, int y){
    int remainder = x%y;
    return remainder;
}
int main(){
    int x,y;
    char o;
    cout<<"enter two integers\n";
    cin>>x>>y;
    do{
        cout<<"Select any operation from \n+ , - , * , / , % , others to exit\n ";
        cin>>o;
        switch(o){
            case '+':
                cout<<"sum = "<<add(x,y)<<endl;
                break;
            case '-':
                cout<<"difference = "<<subtract(x,y)<<endl;
                break;
            case '*':
                cout<<"product = "<<multiply(x,y)<<endl;
                break;
            case '/':
                cout<<"Ratio = "<<divide(x,y)<<endl;
                break;
            case '%':
                cout<<"Remainder ="<<modulo(x,y)<<endl;
            default:
                return 0;    
        }

    }
    while(1);

}