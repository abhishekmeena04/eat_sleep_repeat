Q.13. Write a Program to Check Whether a Character is a Vowel or Consonant.?
ans = :-

#include <iostream>
using namespace std;

void checkVowelOrConsonant(char c) {
    // Convert character to lowercase for uniformity
    c = tolower(c);
    
    // Check if the character is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << c << " is a vowel." << endl;
    }
    // Check if the character is a consonant (alphabet but not vowel)
    else if ((c >= 'a' && c <= 'z')) {
        cout << c << " is a consonant." << endl;
    }
    else {
        cout << c << " is not an alphabet character." << endl;
    }
}

int main() {
    char ch;

    // Input a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Function call to check if vowel or consonant
    checkVowelOrConsonant(ch);

    return 0;
}

Enter a character: A
a is a vowel.

Enter a character: B
b is a consonant.

Enter a character: 7
7 is not an alphabet character.
