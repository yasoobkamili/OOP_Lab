/*
    display
                1
               1 2
              1 2 3
             1 2 3 4
            1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++)
    { 
      for(int j=(n-1);j>=i;j--)
        cout<<" ";
      for(int k=1;k<=i;k++)
        cout<<k<<" ";
        cout<<"\n";
    }
    return 0;
}    

