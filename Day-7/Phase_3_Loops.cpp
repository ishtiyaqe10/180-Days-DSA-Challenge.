#include <iostream>
using namespace std;

int main(){

                         // Phase 5: Break / Continue Logic----->>>>>>

// Que 1. Print numbers from 1 to 100, and stop the loop as soon as a number divisible by 17 is encountered.                          

for (int i = 1; i <= 100; i++) {
        if (i % 17 == 0) {
            break; // Terminate the loop entirely
        }
        cout << i << " ";
    }
    return 0;


// Que 2. Print numbers from 1 to 100, but skip all numbers that are divisible by 5 and continue printing the rest.

for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            continue; // Skip the rest of the current iteration
        }
        cout << i << " ";
    }
    return 0;

// Que 3. Take 5 numbers as input, skip any number that is 0 using continue, and calculate the sum of the remaining numbers.    


int num, sum = 0;
    cout << "Enter 5 numbers:\n";
    for (int i = 1; i <= 5; i++) {
        cin >> num;
        if (num == 0) {
            continue;
        }
        sum += num;
    }
    cout << "Sum of remaining numbers: " << sum << endl;
    return 0;


// Que 4. Search for a specific number in a list of inputs, and terminate the loop immediately when the number is found.

int totalInputs, target, num;
    bool found = false;
    
    cout << "Enter total number of inputs: ";
    cin >> totalInputs;
    cout << "Enter target number to search: ";
    cin >> target;
    
    cout << "Enter the numbers:\n";
    for (int i = 0; i < totalInputs; i++) {
        cin >> num;
        if (num == target) {
            found = true;
            break; // Early exit strategy (Linear Search optimization)
        }
    }
    
    if (found) cout << "Target found!" << endl;
    else cout << "Target not found." << endl;
    return 0;


// Que 5. Keep taking numbers from the user and print them until a negative number appears, then stop the loop.

int num;
    while (true) { // Infinite loop controlled by internal break
        cout << "Enter a number: ";
        cin >> num;
        if (num < 0) {
            break;
        }
        cout << "You entered: " << num << endl;
    }
    return 0;





                                      // Phase 6: Mathematical Series---->>>>

// que  1. Find and print the sum of the first n natural numbers.

int n, sum = 0;
    cout << "Enter n: "; cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;


// Que 2. Find and print the sum of the first n even numbers.

int n, sum = 0, currentEven = 2;
    cout << "Enter n: "; 
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += currentEven;
        currentEven += 2;
    }
    cout << "Sum of first " << n << " even numbers: " << sum << endl;
    return 0;
  
}
