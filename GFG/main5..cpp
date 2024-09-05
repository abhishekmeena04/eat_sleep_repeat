Q.13. Write a Program to Check Whether a Character is a Vowel or Consonant.?
ans = :-

#include <iostream>
using namespace std;

int main() {
    // Declare a variable to hold the character
    char ch;
    
    // Ask the user to input a character
    cout << "Enter a character: ";
    cin >> ch;
    
    // Convert the character to lowercase for uniform comparison
    ch = tolower(ch);
    
    // Check if the character is a vowel or a consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } 
    else if ((ch >= 'a' && ch <= 'z')) {
        cout << ch << " is a consonant." << endl;
    } 
    else {
        cout << ch << " is not a valid alphabet character." << endl;
    }

    return 0;
}
