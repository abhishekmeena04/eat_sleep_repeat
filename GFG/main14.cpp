Q.14. Write a Program to Find the Factorial of a Number Using Loops
#include <iostream>
using namespace std;

// Function to calculate the factorial of a number using a loop
int factorial(int n) {
    int result = 1;

    // Loop from 1 to n, multiplying each number to the result
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int n;

    // Input: Asking the user for the number to find the factorial of
    cout << "Enter a number to find its factorial: ";
    cin >> n;

    // Handle the case where the input is negative
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate the factorial
        int fact = factorial(n);

        // Output the result
        cout << "The factorial of " << n << " is: " << fact << endl;
    }

    return 0;
}

// another

#include <iostream>
using namespace std;

// Function to calculate factorial using a loop
int factorial(int n) {
    int fact = 1; // Initialize the result as 1 (since factorial of 0 is 1)
    
    // Loop from 1 to n to multiply all numbers
    for (int i = 1; i <= n; i++) {
        fact *= i; // Multiply fact by i in each iteration
    }
    
    return fact; // Return the calculated factorial
}

int main() {
    int n;
    
    // Input: Asking the user for the number
    cout << "Enter a number: ";
    cin >> n;
    
    // Calculate the factorial of the given number
    int result = factorial(n);
    
    // Output the result
    cout << "The factorial of " << n << " is: " << result << endl;
    
    return 0;
}
