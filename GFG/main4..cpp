Q.12; Write a Program to Find the ASCII Value of a Character.?

#include <iostream>
using namespace std;

int main() {
    char character;

    // Taking input from the user
    cout << "Enter a character: ";
    cin >> character;

    // Finding and displaying the ASCII value of the character
    int asciiValue = static_cast<int>(character);
    cout << "The ASCII value of '" << character << "' is: " << asciiValue << endl;

    return 0;
}

Enter a character: A;
The ASCII value of 'A' is: 65;

Enter a character: $;
The ASCII value of '$' is: 36;