getline is a function in C++ that is used to read an entire line of text from an input stream,
 such as cin. Unlike the standard input operator (>>),
  which reads input only up to the first whitespace character (space, tab, or newline),
   getline reads the entire line, including spaces, until it encounters a newline character (\n).

#include <iostream>
#include <string>
using namespace std;

void toggleString(string &str) {
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            // Convert lowercase to uppercase
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            // Convert uppercase to lowercase
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    string str;

    // Input a string from the user
    cout << "Enter a string: ";
    getline(cin, str);

    // Toggle the case of each character
    toggleString(str);

    // Print the toggled string
    cout << "The toggled string is: " << str << endl;

    return 0;
}

The program will convert 'H' to 'h', 'e' to 'E', 'l' to 'L', 'o' to 'O', and so on;
The output will be: "hELLO wORLD";