Q. C++ program to remove all character from string except alphabets.?



#include <iostream>
#include <cctype> // For isalpha
using namespace std;

void removeNonAlphabets(string &str) {
    string result;
    
    for (char c : str) {
        if (isalpha(c)) {
            result += c;
        }
    }
    
    str = result;
}

int main() {
    string str = "Hello, World! 123";
    removeNonAlphabets(str);
    cout << "Filtered string: " << str << endl;
    return 0;
}


Filtered string: HelloWorld
