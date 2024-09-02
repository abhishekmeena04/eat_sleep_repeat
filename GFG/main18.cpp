// C++ Program to check
// if number is Armstrong
// or not

#include <iostream>
using namespace std;

int main() {
    int n = 153; // Example number to check
    int temp = n; // Store the original number for comparison
    int ans = 0;  // Variable to store the sum of the cubes of digits

    // Calculate the sum of the cubes of the digits
    while (n > 0) {
        int rem = n % 10;  // Extract the last digit
        ans = ans + (rem * rem * rem);  // Add the cube of the digit to the sum
        n = n / 10;  // Remove the last digit
    }

    // Check if the original number is equal to the sum of the cubes of its digits
    if (temp == ans) {
        cout << "Yes, it is an Armstrong Number" << endl;
    } else {
        cout << "No, it is not an Armstrong Number" << endl;
    }

    return 0; // Return 0 to indicate successful execution 
}
