Q. Write a Program to Find the Length of the String Without using strlen() Function.


#include <iostream>
using namespace std;

int calculateLength(const char* str) {
    int length = 0;   // Initialize length counter
    while (str[length] != '\0') {   // Loop until the null terminator is encountered
        length++;   // Increment length for each character
    }
    return length;   // Return the calculated length
}

int main() {
    char str[100];   // Declare a string with a maximum size of 100 characters

    // Input the string
    cout << "Enter a string: ";
    cin.getline(str, 100);  // Read a line of input

    // Calculate the length of the string
    int length = calculateLength(str);

    // Output the length
    cout << "The length of the string is: " << length << endl;

    return 0;
}

Enter a string: Hello World!
The length of the string is: 12;
