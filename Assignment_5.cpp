/*
    program that accept a number n and prints all prime number less than or equal to n
    use a while loop and a funtion to check if a number is prime
*/
#include<iostream>
using namespace std;
bool isPrime(int n){
    int i = 2, flag = 0;
    while(i<n){
        if(n%i==0){
            flag = 1;
            return false;
        }
        i++;
    }

    if(flag==0){
        return true;
    }
    return -1;
}
int main(){
    int n ,i = 2 , j=2, flag = 0;
    cout<<"Enter any integer:";
    cin>>n;
    cout<<"Prime numbers less than or equal to "<<n<<" are: ";
    while(i<=n){
        if(isPrime(i)){
            cout<<i<<' ';
        }
        i++;
    }
    cout<<endl;

    // below snippet is for implementing the prime check without functions
    // while(i<=n){
    //     while(j<i){
    //         if(i%j==0){
    //             flag = 1;
    //             break;
    //         }
    //         j++;
    //     }
    // if(flag==0){
    //    cout<<i<<" ";
    // }
    // flag = 0;    
    // i++;
    // j=2;
    // }
    // cout<<endl;

}