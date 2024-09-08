Q.18. Write a Program to Print Check Whether a Character is an Alphabet or Not.?

#include <iostream>

using namespace std;

void checkAlphabet(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        cout << c << " is an alphabet." << endl;
    } else {
        cout << c << " is not an alphabet." << endl;
    }
}

int main() {
    char c;

    // Taking the character as input
    cout << "Enter a character: ";
    cin >> c;

    // Checking if the character is an alphabet
    checkAlphabet(c);

    return 0;
    
}

Enter a character: A
A is an alphabet.

Enter a character: 1
1 is not an alphabet.

Enter a character: b
b is an alphabet.

Enter a character: $
$ is not an alphabet.
