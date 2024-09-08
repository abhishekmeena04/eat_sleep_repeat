Q. C++ program to check if the given string is palindrome or not.?

#include <iostream>
#include <cstring>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const char str[]) {
    int n = strlen(str);  // Get the length of the string

    // Iterate from the start and end towards the center
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;  // If characters don't match, it's not a palindrome
        }
    }
    return true;  // All characters matched, it's a palindrome
}

int main() {
    char str[100];  // Assuming the input string will be less than 100 characters

    // Input the string
    cout << "Enter a string: ";
    cin.getline(str, 100);  // Reading a line of text

    // Call the function to check if the string is a palindrome
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}


Enter a string: madam
The string is a palindrome.

Enter a string: hello
The string is not a palindrome.
