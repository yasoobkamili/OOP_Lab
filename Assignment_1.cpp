// c++ program to check whether the year is leap year or not
#include<iostream>
using namespace std;
int main(){
    int year;
    while(1){
        cout<<"Enter any year:\n";
        cin>>year;
        if(year<=0)
            cout<<"Invalid input!! Try again.\n";
        else if(year%4 == 0 && year%100 != 0 || year%400 == 0){
            cout<<"It's a leap year.\n";
            return 0;
        }
        else{
            cout<<"It's not a leap year.\n";
            break;
        }    
    }
    return 0;
}