Q. Write a Program to Count the Number of Vowels.?


#include <iostream>
using namespace std;

int countVowels(const char str[]) {
    int count = 0;

    // Loop through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert each character to lowercase
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;  // Increment the count if it's a vowel
        }
    }

    return count;
}

int main() {
    char str[100];  // Assuming the input string will be less than 100 characters

    // Input the string
    cout << "Enter a string: ";
    cin.getline(str, 100);  // Reading a line of text

    // Call the function to count vowels
    int vowelCount = countVowels(str);

    // Output the result
    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}


If the user inputs the string "Hello World":
The vowels are 'e' and 'o' (twice).
The output will be: "The number of vowels in the string is: 3". 