Q. 12. Write a Program to Remove Spaces From a String

#include <iostream>
#include <string>
using namespace std;

// Function to remove spaces from the given string
string removeSpaces(const string &str) {
    string result = ""; // Initialize an empty string to store the result

    // Iterate through each character in the input string
    for (char ch : str) {
        // If the character is not a space, append it to the result string
        if (ch != ' ') {
            result += ch;
        }
    }

    return result; // Return the string with spaces removed
}

int main() {
    string str;

    // Input the string from the user
    cout << "Enter a string: ";
    getline(cin, str); // Read the entire line of input, including spaces

    // Remove spaces from the string
    string noSpaces = removeSpaces(str);

    // Output the result
    cout << "String after removing spaces: " << noSpaces << endl;

    return 0;
}
