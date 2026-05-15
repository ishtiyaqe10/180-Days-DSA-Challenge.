#include <iostream>
using namespace std;

int main()
{
                          // LOGIC BUILDING WITH LOOPS
                          // Phase 1 : While Loop------>>


// Que 1. Print all numbers from 1 to 10 using a loop.

for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    return 0;


// Que 2. Print numbers from 10 down to 1 in reverse order.    
// Starting from 10, decrementing i until it reaches 1

    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    return 0;


// Que 3. Print all even numbers between 1 and 100.

for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) { // Checking if remainder is 0 when divided by 2
            cout << i << " ";
        }
    }
    return 0;


// Que 4. Print all odd numbers between 1 and 100.

for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) { // Checking if remainder is not 0
            cout << i << " ";
        }
    }
    return 0;


// Que 5. Print the multiplication table of a given number from n * 1 to n * 10.    

int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << (n * i) << endl;
    }
    return 0;



                    // Phase-2 Do-While Loops


// Que  1. Print numbers from 1 to 10         

for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    return 0;


// Que 2. Print the multiplication table of a given number.

    int n;
    cout << "Enter number: "; cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;


// Que 3. Keep taking numbers from the user until 0 is entered, then print the sum of all entered numbers.

int n, sum = 0;
    do {
        cout << "Enter a number (0 to stop): ";
        cin >> n;
        sum += n;
    } while (n != 0);
    cout << "Total Sum: " << sum;
    return 0;


// Que 4. Keep taking numbers from the user until 0 is entered, then print the largest number among all inputs.

int n, maxNum = INT_MIN;
    do {
        cout << "Enter a number (0 to stop): ";
        cin >> n;
        if (n != 0 && n > maxNum) maxNum = n;
    } while (n != 0);
    cout << "Largest Number: " << maxNum;
    return 0;    



// Que 5. Count and print the number of digits in the given number.

int n, count = 0;
    cout << "Enter number: "; cin >> n;
    if (n == 0) count = 1;
    while (n != 0) {
        n /= 10;
        count++;
    }
    cout << "Number of digits: " << count;
    return 0;
}


//  Que 6. Reverse the given number and print the reversed value.


int n, rev = 0;
    cout << "Enter number: "; cin >> n;
    while (n > 0) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    cout << "Reversed: " << rev;
    return 0;
  
}
