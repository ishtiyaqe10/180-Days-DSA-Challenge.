//Coder run-  g++ main.cpp -o main && main

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int square = num * num;

    cout << "Square of " << num << " is: " << square << endl;

    return 0;


    //Another Question 

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = a + b;

    cout << "Sum is: " << sum << endl;

    return 0;


    //EVEN ODD Check

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Even Number";
    } else {
        cout << "Odd Number";
    }

    return 0;

//    Largest 3 Numbers
int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Largest is: " << a;
    } 
    else if (b >= a && b >= c) {
        cout << "Largest is: " << b;
    } 
    else {
        cout << "Largest is: " << c;
    }

    return 0;


    //CHECK LEAP OR NOT LEAP YEAR

    int year;
    cout << "Enter Year";
    cin >> year;
    if((year % 4 == 0 && year % 100!=0 || year % 400 ==0  )){
        cout<<"Leap Year";

    }else{
        cout<<"Not a Leap year";
    }

    return 0 ;


    // Another Question if-else
    int budget ;
    cout << "Enter Your Budget" <<endl;


    //input 
    cin >> budget;

    if(budget>200000){
        cout << "You can buy Scorpio" << endl;
    }
else {
    cout << "You cannot buy Scorpio" << endl;
}

return 0;


 // Question if-else if 
int marks = 55; 

if(marks > 90){
    cout <<"A";
}else if(marks > 80){
    cout <<"B";
}else if(marks > 70){
    cout  <<"C";
}else if(marks > 60){
    cout << "D";
}
else {
    cout << "You Failed";
}
return 0;


// Check Positive / Negative / Zero

int num = -4;

if(num > 0){
    cout  << "Positive";
} else if( num < 0) {
    cout << "Negative";
}
else {
    cout << "Zero";
} 

}
