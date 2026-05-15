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
}
