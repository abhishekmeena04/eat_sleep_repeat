Q. Write a Program to Remove All Characters From a String Except Alphabets.?


#include <iostream>
#include <string>
using namespace std;

string removeNonAlphabets(const string &str) {
    string result = "";

    for (char ch : str) {
        // Check if the character is an alphabet (either uppercase or lowercase)
        if (isalpha(ch)) {
            result += ch; // Append alphabet character to result string
        }
    }

    return result;
}

int main() {
    string str;

    // Input the string from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Remove all non-alphabet characters from the string
    string alphabetsOnly = removeNonAlphabets(str);

    // Output the result
    cout << "String with only alphabets: " << alphabetsOnly << endl;

    return 0;
}
