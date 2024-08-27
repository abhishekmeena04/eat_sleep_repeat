Q. 11. C++ Program To Check Whether Number is Even Or Odd
#include <iostream>
using namespace std;

int main() {
    int number;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Checking if the number is even or odd
    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}

Enter a number: 4
The number is even.

Enter a number: 7
The number is odd.
