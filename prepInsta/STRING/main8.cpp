Q. C++ program to check if the given string is palindrome or not.?

#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string &s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false; // Characters do not match
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}



Enter a string: madam
The string is a palindrome.

Enter a string: hello
The string is not a palindrome.
