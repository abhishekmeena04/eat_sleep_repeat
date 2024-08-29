Q. Write a Program to Count the Number of Vowels 


#include <iostream>
#include <string>
using namespace std;

int countVowels(const string &str) {
    int count = 0;
    
    for (int i = 0; i < str.length(); i++) {
        // Convert character to lowercase to handle both upper and lower case vowels
        char ch = tolower(str[i]);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    string input;

    // Input the string from the user
    cout << "Enter a string: ";
    getline(cin, input);

    // Count the number of vowels
    int vowelCount = countVowels(input);

    // Output the result
    cout << "The number of vowels in the string is: " << vowelCount << endl;

    return 0;
}

If the user inputs the string "Hello World":

The vowels are 'e' and 'o' (twice).
The output will be: "The number of vowels in the string is: 3".