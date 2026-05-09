
//-------- Level 1: Simple Conditions (If–Else, Boolean Logic) ---------

#include <iostream>
using namespace std;

int main()
{

   // Que. 1 Take a number and print whether it’s positive, negative, or zero

   int n;
   cout << "Enter Number";
   cin >> n;
   if (n > 0)
   {
      cout << "Positive" << endl;
   }
   else if (n < 0)
   {
      cout << "Negative" << endl;
   }
   else
   {
      cout << "Zero" << endl;
   }

   // Que.2 Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions

   float temp;

   cout << "Enter temperature: ";
   cin >> temp;

   if (temp < 15)
   {
      cout << "Cold";
   }
   else if (temp >= 15 && temp <= 30)
   {
      cout << "Warm";
   }
   else
   {
      cout << "Hot";
   }

   return 0;

   // Que.3 Take a character and check if it’s a vowel or consonant.

   char ch;
   cin >> ch;

   // Convert to lowercase (optional)
   ch = tolower(ch);

   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      cout << "Vowel";
   else
      cout << "Consonant";

   return 0;

   // Que.4 Take a character and check whether it’s uppercase, lowercase,a digit, or a special character.

   char ch;
   cout << "Enter Character";
   cin >> ch;

   if (ch >= 'A' && ch <= 'Z')
   {
      cout << "Uppercase";
   }
   else if (ch >= 'a' && ch <= 'z')
   {
      cout << "Lowercase";
   }
   else if (ch >= '0' && ch <= '9')
   {
      cout << "Digit";
   }
   else
   {
      cout << "Special Character";
   }

   return 0;



                                                                     //------ Level 2: Nested If & Multiple Conditions ----------


   // Que. 1 Take three sides and check if they form a valid triangle

   bool isValidTriangle(int a, int b, int c)
   {
      // Check the triangle inequality theorem
      if (a + b > c && a + c > b && b + c > a)
      {
         return true;
      }
      return false;
   }

   int a = 3, b = 4, c = 5;

   if (isValidTriangle(a, b, c))
   {
      cout << "Valid Triangle" << endl;
   }
   else
   {
      cout << "Invalid Triangle" << endl;
   }

   return 0;


   // Que. 2 If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene.

   double a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // First, check if it forms a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Equilateral Triangle" << endl;
        } 
        else if (a == b || b == c || a == c) {
            cout << "Isosceles Triangle" << endl;
        } 
        else {
            cout << "Scalene Triangle" << endl;
        }
    } else {
        cout << "Invalid Triangle sides!" << endl;
    }
    return 0;



    // Que 3 ake marks (0–100) and print the corresponding grade (A/B/C/D/F).

    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered!" << endl;
    } else if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;


   // Que 4 Check if one of two given numbers is a multiple of the other.

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Prevent division by zero
    if (num1 == 0 || num2 == 0) {
        cout << "Numbers must be non-zero." << endl;
    }
    else if (num1 % num2 == 0) {
        cout << num1 << " is a multiple of " << num2 << endl;
    } 
    else if (num2 % num1 == 0) {
        cout << num2 << " is a multiple of " << num1 << endl;
    } 
    else {
        cout << "Neither number is a multiple of the other." << endl;
    }
    return 0;


  //  Que 5 Take the hour of the day (0–23) and print “Good Morning”, “Good Afternoon”, “Good Evening”, or “Good Night”.

    int hour;
    cout << "Enter hour (0-23): ";
    cin >> hour;

    if (hour < 0 || hour > 23) {
        cout << "Invalid hour!" << endl;
    } else if (hour >= 5 && hour <= 11) {
        cout << "Good Morning" << endl;
    } else if (hour >= 12 && hour <= 16) {
        cout << "Good Afternoon" << endl;
    } else if (hour >= 17 && hour <= 21) {
        cout << "Good Evening" << endl;
    } else {
        cout << "Good Night" << endl;
    }
    return 0;


//Que. 7 Take two numbers and determine whether both are even, both are odd, or one is even and one is odd.

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    bool isNum1Even = (num1 % 2 == 0);
    bool isNum2Even = (num2 % 2 == 0);

    if (isNum1Even && isNum2Even) {
        cout << "Both are even." << endl;
    } else if (!isNum1Even && !isNum2Even) {
        cout << "Both are odd." << endl;
    } else {
        cout << "One is even and one is odd." << endl;
    }
    return 0;


//Que 8 Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’.

    char ch;
    cout << "Enter an alphabet character: ";
    cin >> ch;

    // Convert to lowercase if it is uppercase
    char lowerCh = tolower(ch);

    if (lowerCh >= 'a' && lowerCh <= 'm') {
        cout << "'" << ch << "' lies between 'a' and 'm'" << endl;
    } else if (lowerCh >= 'n' && lowerCh <= 'z') {
        cout << "'" << ch << "' lies between 'n' and 'z'" << endl;
    } else {
        cout << "The entered character is not a valid alphabet letter." << endl;
    }
    return 0;


//Que 9 Take a month number (1–12) and print the number of days in that month (ignore leap years).



    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days" << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days" << endl;
            break;
        case 2:
            cout << "28 days" << endl;
            break;
        default:
            cout << "Invalid month number! Please enter between 1 and 12." << endl;
            break;
    }
    return 0;
}
