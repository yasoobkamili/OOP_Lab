/*
Program7: Grading System using if-else Statements
Write a program that takes a student's score (out of 100) as input and displays the grade based on
the following criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60
Use if-else statements for this.
*/

#include <iostream>
using namespace std;

int main() {
    int score;  
    cout<<"Enter your score (out of 100):\n";
    cin>>score;
    if(score>=90 && score<=100) 
        cout<<"Grade: A\n";
    else if(score>=80 && score<90) 
        cout<<"Grade: B\n";
    else if(score>=70 && score<80) 
        cout << "Grade: C\n";
    else if(score>=60 && score<70) 
        cout << "Grade: D\n";
    else if(score<60 && score>=0) 
      cout<<"Grade: F\n";
    else {
        cout<<"Invalid score\n";
    }
    
    return 0;
}
