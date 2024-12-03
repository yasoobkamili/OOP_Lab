// temperature conversion program
#include<iostream>
using namespace std;
float F_to_C(float temp){
    // (F − 32) × 5/9 = C
    float C = (((float)temp-32)*5)/9;
    return C;
}

float C_to_F(float temp){
    //(C × 9/5) + 32 = F
    float F = ((float)temp*9)/5 + 32;
    return F; 
}
int main(){
    float temp;
    int x;
    cout<<"Type 1 to convert Fahrenheit to Celsius,\n     2 to convert Celsius to Fahrenheit: ";
    cin>>x;

    switch(x){
        case 1:
            cout<<"Enter temperature in Fahrenheit: ";
            cin>>temp;
            cout<<F_to_C(temp)<<endl;
        case 2:
            cout<<"Enter temperature in Celsius: ";
            cin>>temp;
            cout<<C_to_F(temp)<<endl;
        default:
            cout<<"Invalid Choice";
    }
}