#include <iostream>
using namespace std;

int main () {
//1. How to Create an Array in C++
//When you create a standard array, you must tell the compiler two things: the data type of the elements and the fixed size of the array.

//Syntax & Initialization Examples:

// 1. Declaration without initialization (allocates memory, contains random garbage values)
int marks[5]; 

// 2. Declaration with initialization
int numbers[5] = {10, 20, 30, 40, 50};

// 3. Omission of size (Compiler automatically calculates size as 4)
int age[] = {19, 21, 20, 22};

// 4. Partial initialization (Rest of the elements automatically become 0)
int scores[5] = {95, 88}; // Elements are: {95, 88, 0, 0, 0}


  //How to Access and Modify Elements
//Elements in an array are accessed using an Index number. In programming, arrays are 0-indexed, meaning the first element is at index 0, the second is at index 1, and the last element is at index size - 1.
  
    int arr[4] = {10, 25, 45, 90};

    // Accessing elements
    cout << "First element: " << arr[0] << endl;  // Output: 10
    cout << "Third element: " << arr[2] << endl;  // Output: 45

    // Modifying an element
    arr[1] = 99; // Changes 25 to 99

    cout << "Updated second element: " << arr[1] << endl; // Output: 99
    return 0;

//How Arrays Work Internally (The Math)
//Why is accessing any element in an array lightning fast? Because of Contiguous Memory.
//When you declare int arr[5], the computer finds a completely free sequential block in the RAM. If an int takes 4 bytes of memory and your

//arr[0] sits at address 100
//arr[1] sits at address 104
//arr[2] sits at address 108

  
//More Advanced Operations: Traversal
//To do anything useful with an array (like searching, printing, or modifying every value), you must traverse it using a loop.
  


//Using a Standard For Loop:
  
int myArr[5] = {2, 4, 6, 8, 10};
int size = 5;

for (int i = 0; i < size; i++) {
    cout << myArr[i] << " ";
}


//Using a Modern Range-based For Loop:

  for (int element : myArr) {
    cout << element << " ";
  }
 
}
