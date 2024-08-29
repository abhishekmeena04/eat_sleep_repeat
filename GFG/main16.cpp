16. Write a Program to Check the Prime Number


#include <iostream> // Include the iostream library for input and output operations
using namespace std;

int main() {
    
    int n, count = 0;  // Declare an integer variable 'n' to store the input number and 'count' to count the divisors
    cin >> n;          // Take input from the user and store it in variable 'n'
    
    // Loop from 2 to 'n' to check how many numbers can divide 'n' evenly
    for(int i = 2; i <= n; i++) {
        if(n % i == 0) {  // Check if 'n' is divisible by 'i'
            count = count + 1;  // If it is, increment the count by 1
        }
    }

    // After the loop, check the value of 'count'
    if(count == 1) {
        cout << "prime";  // If 'count' is 1, 'n' is prime because it has only one divisor (itself)
    } else {
        cout << "not prime";  // If 'count' is not 1, 'n' is not prime
    }

    return 0;  // Return 0 to indicate successful execution of the program
}


Example 1: If you enter 7, the output will be "7 is a prime number." because 7 is not divisible by any number other than 1 and 7.
Example 2: If you enter 10, the output will be "10 is not a prime number." because 10 is divisible by 2 and 5.

Example 1: If you input 7, the loop will find that 7 is divisible only by itself. Thus, count will be 1, and the program will output "prime".
Example 2: If you input 10, the loop will find that 10 is divisible by 2, 5, and 10 itself. Thus, count will be greater than 1, and the program will output "not prime".

