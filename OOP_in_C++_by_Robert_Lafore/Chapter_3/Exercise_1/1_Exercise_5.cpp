// Use for loops to construct a program that displays a pyramid of Xs on the screen. The
// pyramid should look like this
// except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
// this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
// loop that steps down the screen from line to line.
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=20;
    for(i=0; i<n; i++){
        for(j=n;j>i; j--){
            cout<<" ";
        }
        for(k=0; k<i; k++){
                cout<<"X ";
            }
        cout<<endl;
    }
    return 0;
}