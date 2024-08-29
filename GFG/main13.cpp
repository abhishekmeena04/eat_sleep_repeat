Q.13. Write a Program to Find the Sum of the First N Natural Numbers.?

#include <iostream>
using namespace std;

// Function to calculate the sum of the first N natural numbers
int sumOfNaturalNumbers(int n) {
    // Sum formula: n * (n + 1) / 2
    int sum = n * (n + 1) / 2;
    return sum;
}

int main() {
    int n;
    
    // Input: Asking the user for the value of N
    cout << "Enter the value of N: ";
    cin >> n;
    
    // Calculate the sum of the first N natural numbers
    int sum = sumOfNaturalNumbers(n);

    // Output the result
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
