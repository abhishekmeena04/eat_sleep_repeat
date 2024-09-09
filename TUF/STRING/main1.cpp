Check if the given String is Palindrome or not


93

6
Problem Statement: "Given a string, check if the string is palindrome or not."  A string is said to be palindrome if the reverse of the string is the same as the string.

Examples:

Example 1:
Input: Str =  “ABCDCBA”
Output: Palindrome
Explanation: String when reversed is the same as string.

Example 2:
Input: Str = “TAKE U FORWARD”
Output: Not Palindrome
Explanation: String when reversed is not the same as string.





#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;
    
    // Compare characters while moving towards the center
    while (left < right) {
        if (str[left] != str[right]) {
            return false;  // If mismatch found, it's not a palindrome
        }
        left++;
        right--;
    }
    return true;  // All characters matched
}

int main() {
    string str1 = "ABCDCBA";
    string str2 = "TAKE U FORWARD";
    
    if (isPalindrome(str1)) {
        cout << str1 << " is a Palindrome" << endl;
    } else {
        cout << str1 << " is Not Palindrome" << endl;
    }
    
    if (isPalindrome(str2)) {
        cout << str2 << " is a Palindrome" << endl;
    } else {
        cout << str2 << " is Not Palindrome" << endl;
    }
    
    return 0;
}
