/*  C++ program to calculate income tax based on following
    Income <= Rs 2,50,000: No tax
    2,50,001 - 5,00,000 : 5%
    5,00,001 - 10,00,000: 20%
    Above 10,00,000: 30%
*/
#include<iostream>
using namespace std;
int main(){
    int income , tax;
    cout<<"Enter your annual income:\n";
    cin>>income;
    if(income>0){
        if(income<=250000)
            cout<<"No tax\n";
        else if( income>=250001 && income<=500000)
            cout<<"Tax Applicable = "<<income*0.05<<"\n";
        else if( income>=500001 && income<=1000000)
            cout<<"Tax Applicable = "<<income*0.2<<endl;
        else 
            cout<<"Tax Applicable ="<<income*0.3<< endl;
    }
    else   
        cout<<"Invalid income";
}