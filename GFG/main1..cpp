Q. Write a C++ Program to Check Whether a Number is a Positive or Negative Number.
#include <iostream>
using namespace std;

int main() {
    int number;

    // Taking the number as input
    cout << "Enter a number: ";
    cin >> number;

    // Checking if the number is positive or negative
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}


Enter a number: 5
The number is positive.
csharp
Copy code
Enter a number: -3
The number is negative.
csharp
Copy code
Enter a number: 0
The number is zero.

