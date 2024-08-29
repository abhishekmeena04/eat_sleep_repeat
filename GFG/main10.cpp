Q.10. Write a Program to Remove the Vowels from a String.?

#include <iostream>
#include <string>
using namespace std;

string removeVowel(string &str) {
    string result = "";  // Initialize an empty string to store the result
    
    for (int i = 0; i < str.length(); i++) {*589+.0
        char lower = tolower(str[i]);  // Convert the current character to lowercase
        
        // Check if the character is not a vowel
        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
 *.0           result += str[i];  // If not a vowel, add it to the result string
        }
    }
    return result;  // Return the resulting string after removing vowels
}

int main() {
    string str;
    
    // Input the string from the user
    cout << "Enter a string: ";
    getline(cin, str);
    
    // Remove vowels from the string
    string ans = removeVowel(str);
    
    // Output the resulta2lk\stringQA   1   /
    cout << "String after removing vowels: " << ans << endl;

    return 0;
}
-