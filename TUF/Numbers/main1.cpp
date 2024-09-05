//Check if a number is palindrome or not


#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold the number and intermediate values
    int num, originalNum, reversedNum = 0, remainder;
    
    // Ask the user to input a number
    cout << "Enter an integer: ";
    cin >> num;
    
    // Store the original number for comparison
    originalNum = num;
    
    // Process the number to reverse it
    while (num != 0) {
        remainder = num % 10;       // Get the last digit of the number
        reversedNum = reversedNum * 10 + remainder; // Append the digit to reversedNum
        num = num / 10;             // Remove the last digit from the original number
    }
    
    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}


Enter an integer: 12321
12321 is a palindrome.
Enter an integer: 12345
12345 is not a palindrome.


// Given an integer, check whether it is a palindrome or not.

// Note : Strings which read the same backwards as forwards , eg - MADAM, MOM etc.

// Example 1:

// Input: n = 555
// Output: Yes

#include <iostream>
using namespace std; //

class Solution {
public:
    // Function to check if a number is a palindrome
    string isPalindrome(int n) {
        int originalNum = n;     // Store the original number
        int reversedNum = 0;     // Variable to store the reversed number
        int remainder;
        
        // Reverse the digits of the number
        while (n != 0) {
            remainder = n % 10;                    // Get the last digit
            reversedNum = reversedNum * 10 + remainder; // Add the digit to reversedNum
            n = n / 10;                            // Remove the last digit from n
        }
        
        // Check if the reversed number is the same as the original
        if (originalNum == reversedNum) {
            return "Yes";
        } else {
            return "No";
        }
    }
};

int main() {
    Solution sol;
    int num;
    
    // Input the integer
    cout << "Enter a number: ";
    cin >> num;
    
    // Check if the number is a palindrome
    cout << sol.isPalindrome(num) << endl;
    
    return 0;
}

Enter a number: 555
Yes
Enter a number: 123
No



// Given a string S, check if it is palindrome or not.

// Example 1:

// Input: S = "abba"
// Output: 1
// Explanation: S is a palindrome



#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Function to check if a string is a palindrome
    bool isPalindrome(string S) {
        int start = 0;               // Starting index
        int end = S.length() - 1;     // Ending index
        
        // Loop to compare characters from both ends
        while (start < end) {
            // If characters don't match, return false
            if (S[start] != S[end]) {
                return false;
            }
            start++;   // Move forward from the start
            end--;     // Move backward from the end
        }
        return true;   // If the loop completes, it's a palindrome
    }
};

int main() {
    Solution sol;
    string str;
    
    // Input the string
    cout << "Enter a string: ";
    cin >> str;
    
    // Check if the string is a palindrome
    if (sol.isPalindrome(str)) {
        cout << "1" << endl; // 1 means the string is a palindrome
    } else {
        cout << "0" << endl; // 0 means the string is not a palindrome
    }
    
    return 0;
}


Example 1:
Enter a string: abba
1

Example 2:
Enter a string: hello
0




// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending with 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        long originalNum = x;  // Use long to avoid overflow issues
        long reversedNum = 0;  // Use long for reversed number
        int remainder;
        
        // Reverse the digits of the number
        while (x != 0) {
            remainder = x % 10;               // Get the last digit
            reversedNum = reversedNum * 10 + remainder; // Construct the reversed number
            x = x / 10;                       // Remove the last digit from x
        }
        
        // Check if the reversed number is the same as the original
        return (originalNum == reversedNum);
    }
};
