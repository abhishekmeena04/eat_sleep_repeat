//Find all Palindrome Numbers in a given range
// Note: A palindromic number is a number that remains the same when its digits are reversed.OR  a palindrome is a number that reads the same forward and backward Eg: 121,1221, 2552

// Examples:

// Example 1:
// Input: min = 10 , max = 50
// Output: 11 22 33 44 
// Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.

// Example2:
// Input: min = 100 , max = 150
// Output: 101 111 121 131 141 
// Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.


Q. //
            
#include <iostream>
using namespace std;

// A function to check if n is a palindrome
bool isPalindrome(int n) {
    int reverse = 0;  // Variable to store the reversed number
    int temp = n;     // Temporary variable for manipulation

    // Reverse the number
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;  // Append the last digit of temp to reverse
        temp = temp / 10;                    // Remove the last digit from temp
    }

    // Check if the reversed number is the same as the original
    return (n == reverse);
}

int main() {
    int min = 100;  // Start of the range
    int max = 150;  // End of the range

    // Loop through the range and check for palindromes
    for (int i = min; i <= max; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";  // Print the palindrome number
        }
    }

    cout << endl;  // Print a newline after listing all palindromes
    return 0;
}
