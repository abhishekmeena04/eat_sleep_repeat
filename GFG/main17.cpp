17. Write a Program to Check Palindrome.?

#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int number) {
    int originalNumber = number; // Store the original number for comparison
    int reversedNumber = 0;     // Variable to store the reversed number
    int remainder;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;               // Get the last digit of the number
        reversedNumber = (reversedNumber * 10) + remainder; // Build the reversed number
        number = number / 10;                 // Remove the last digit from the number
    }

    // Check if the reversed number is equal to the original number
    return (reversedNumber == originalNumber);
}

int main() {
    int num;

    // Input: Asking the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the entered number is a palindrome
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0; // Return 0 to indicate successful execution
}

// another

// C++ program to check if a
// number is Palindrome or not
#include <iostream>
using namespace std;

// Function to check Palindrome
bool checkPalindrome(int n)
{
    int ans = 0;
    int temp = n;
    while (temp != 0) {
        ans = (ans * 10) + (temp % 10);
        temp = temp / 10;
    }

    return (ans == n);
}

int main()
{
    int n = 12321;

    if (checkPalindrome(n) == 1) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

    return 0;
}