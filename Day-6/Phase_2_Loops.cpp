#inlcude <iostream>
using namespace std;

int main(){
                          // For Loop Based ----->>>
// Que 1. Print all numbers from 1 to 10.

for (int i = 1; i <= 10; i++) {
cout << i << " ";
}



// Que 2. Print numbers from 10 down to 1 in reverse order.

for (int i = 10; i >= 1; i--){ 
cout << i << " ";
}


// Que 3. Print all even numbers between 1 and 100.

for (int i = 2; i <= 100; i += 2) 
cout << i << " ";


// Que 4. Calculate and print the factorial of a given number.

int n; 
cin >> n;
long long fact = 1;
for (int i = 1; i <= n; i++) fact *= i;
cout << "Factorial: " << fact;


// Que 5. Calculate and print the factorial of every number from 1 to n.

int n; cin >> n;
long long fact = 1;
for (int i = 1; i <= n; i++) {
    fact *= i;
    cout << "Factorial of " << i << " is " << fact << endl;
}


// Que 6. Print all prime numbers between 1 and 100.

for (int i = 2; i <= 100; i++) {
    bool isPrime = true;
    for (int j = 2; j * j <= i; j++) {
        if (i % j == 0) { isPrime = false; break; }
    }
    if (isPrime) cout << i << " ";
}


// Que 7. Check whether the given number is a prime number.

int n; 
cin >> n;
bool isPrime = (n > 1);
for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) { isPrime = false; break; }
}
if (isPrime) cout << "Prime"; else cout << "Not Prime";



// Que 8. Print the Fibonacci series up to the required number of terms.

int terms, a = 0, b = 1, next;
cin >> terms;
for (int i = 1; i <= terms; i++) {
    cout << a << " ";
    next = a + b;
    a = b;
    b = next;
}


// Que 9. Print the cube of each number from 1 to n

int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Cube of " << i << " = " << (i * i * i) << endl;
    }
    return 0;


// Que 10.Print all numbers between a and b that are divisible by 7

int a, b;
    cout << "Enter the range (a and b): ";
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }
    return 0;


// Que 11. Find and print the sum of the first n natural numbers

int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i; // Add current number to total sum
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;


// Que 12. . Find and print the sum of all even numbers from 1 up to n

    int n, 
    sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "Sum of even numbers up to " << n << " is: " << sum << endl;
    return 0;


// Que 13. Find and print the sum of all odd numbers from 1 up to n

int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << "Sum of odd numbers up to " << n << " is: " << sum << endl;
    return 0;
}
