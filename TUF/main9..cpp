static_cast is a keyword in C++, part of the program's code, and used for type conversion.
It's crucial for ensuring correct division when calculating averages, especially when dealing with integer values.

Q.20; Average of all the elements in the array

#include <iostream>
#include <vector>
using namespace std;

double calculateAverage(vector<int>& arr) {
    int sum = 0;
    int n = arr.size();

    // Calculate the sum of all elements
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the average
    double average = static_cast<double>(sum) / n;

    return average;
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate and print the average
    double average = calculateAverage(arr);
    cout << "The average of all the elements in the array is: " << average << endl;

    return 0;
}



// optimal

double calculateAverage(const vector<int>& arr) {
    int n = arr.size();
    int sum = 0;

    // Calculate the sum of all elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate and return the average
    return static_cast<double>(sum) / n;
}