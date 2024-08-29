Q. Write a Program to Find the Length of the String Without using strlen() Function.


#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    string str = "GeeksforGeeks";
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    cout << "The length of the string is: " << length
         << endl;

    return 0;
}


The length of the string is: 13

// another

#include <iostream>
using namespace std;

int findLength(const string str) {
    int length = 0;

    // Loop through the string until the null terminator is reached
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    return length;
}

int main() {
    string str = "GeeksforGeeks";

    

    // Find the length of the string
    int length = findLength(str);

    // Output the result
    cout << "The length of the string is: " << length << endl;

    return 0;
}
