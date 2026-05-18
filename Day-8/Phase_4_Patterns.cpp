#include <iostream>
using namespace std;

int main(){

                           // Phase 7: Star Pattern Printing


// Que 1. Print a Single Star (*)

cout << "*" << endl;
    return 0;

// Que 2. Print Four Stars (****)

for (int i = 1; i <= 4; i++) {
        cout << "*";
    }
    cout << endl;
    return 0;

// 3. Print n Stars on the Same Line

int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;
    return 0;


//Que 4. Print Square of Stars ($n \times n$ Stars)
// Logic: The outer loop handles the rows, and the inner loop controls printing the columns of stars for each row.    

int n;
    cout << "Enter grid size (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {       // Outer loop for Rows
        for (int j = 1; j <= n; j++) {   // Inner loop for Columns
            cout << "*";
        }
        cout << endl; // Move to the next line after completing a row
    }
    return 0;


// Que 5. Print an Increasing Triangle of Stars 
// Logic: On row i, you want to print exactly i stars. For example, Row 1 gets 1 star, Row 2 gets 2 stars, etc. Your inner loop condition becomes j <= i.    

int n;
    cout << "Enter number of rows (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) { // Loop runs 'i' times
            cout << "*";
        }
        cout << endl;
    }
    return 0;


// Que 6. Print a Right-Aligned Triangle of Stars

// Logic: For a grid of size n, row i needs spaces before the stars to push them over to the right.
// Number of Spaces on row i = n - i
// Number of Stars on row i = i  

int n;
    cout << "Enter number of rows (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // 1. Print the required spaces first
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // 2. Print the stars immediately after spaces
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;


// Que 7. Print Stars in Even Numbers (2, 4, 6, 8, 10)
//Logic: The outer loop runs n times. For any row i (starting from 1), the number of stars you need to print is exactly 2 * i.
//Rows vs Stars Calculation:
//Row 1 --> 2 x 1 = 2 stars
//Row 2 --> 2 x 2 = 4 stars
//Row 3 --> 2 x 3 = 6 stars
    

int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Inner loop runs (2 * i) times to print even number of stars
        for (int j = 1; j <= 2 * i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;


// Que 8. Print Stars in Odd Numbers (1, 3, 5, 7, 9)
// Logic: Similar to the even pattern, but we map row i to an odd sequence using the standard mathematical formula: Star= 2 x i-1
//Rows vs Stars Calculation:
//Row 1 --> (2 x 1) - 1 = 1 star
//Row 2 --> (2 x 2) - 1 = 3 stars
//Row 3 --> (2 x 3) - 1 = 5 stars

int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Inner loop runs (2 * i - 1) times to print odd number of stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;


// Que 9. Print a Centered Pyramid of Stars

// Logic: A centered pyramid is simply the Odd Star Pattern (Question 8) with leading spaces added to center it, just like you did for the right-aligned triangle.
// Number of Spaces on row i = n - i
// Number of Stars on row i = 2 x i - 1


int n;
    cout << "Enter number of rows for pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // 1. Print leading spaces to push stars into a pyramid shape
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // 2. Print the odd sequence of stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
  
}
