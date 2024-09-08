Q. Remove brackets from an algebraic expression :.?


#include <iostream>
#include <stack>
#include <string>
using namespace std;

string removeBrackets(const string &expression) {
    stack<char> stk; // Stack to keep track of brackets
    string result; // To store the final expression without brackets

    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            stk.push(ch); // Push opening brackets onto the stack
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (!stk.empty()) {
                stk.pop(); // Pop matching opening bracket
            }
        } else {
            if (stk.empty()) {
                result += ch; // Append non-bracket characters to the result
            }
        }
    }

    return result;
}

int main() {
    string expression;
    cout << "Enter an algebraic expression: ";
    getline(cin, expression);

    string result = removeBrackets(expression);
    cout << "Expression without brackets: " << result << endl;

    return 0;
}


Enter an algebraic expression: abh[[[;
Expression without brackets: abh;