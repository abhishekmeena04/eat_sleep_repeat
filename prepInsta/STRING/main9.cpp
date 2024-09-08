Q. Program to Reverse a String in C++ (All Methods).?

// 1. Using a Loop
// This method manually reverses the string by swapping characters.
#include <iostream>
#include <cstring> // For strlen
using namespace std;

void reverseStringLoop(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; ++i) {
        // Swap characters
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    reverseStringLoop(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}

//2. Using Two-Pointer Technique (For char[] Array)
// Another approach similar to the loop method but demonstrates the two-pointer technique.

#include <iostream>
#include <cstring>
using namespace std;

void reverseStringTwoPointer(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    char str[] = "Hello, World!";
    reverseStringTwoPointer(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}


// 3. Using std::reverse from the STL
// The Standard Library provides a built-in function to reverse a string.

cpp
Copy code
#include <iostream>
#include <algorithm> // For std::reverse
using namespace std;

int main() {
    string str = "Hello, World!";
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
    return 0;
}