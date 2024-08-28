
Q.21. Find Median of the given Array


#include <bits/stdc++.h>  // This header file includes most of the standard libraries in C++
using namespace std;  // This allows us to use standard namespace elements without prefixing them with "std::"

void getMedian(int arr[], int n) {
    sort(arr, arr + n);  // Step 1: Sort the array in non-decreasing order

    // Step 2: Check if the number of elements (n) is even or odd
    if (n % 2 == 0) {
        // If n is even, calculate the average of the two middle elements
        int ind1 = (n / 2) - 1;  // The first middle element's index
        int ind2 = (n / 2);      // The second middle element's index
        cout << (double)(arr[ind1] + arr[ind2]) / 2;  // Print the average of the two middle elements as the median
    } else {
        // If n is odd, the median is the middle element
        cout << arr[(n / 2)];  // Print the middle element as the median
    }
}

int main() {
    int arr[] = {4, 7, 1, 2, 5, 6};  // An example array with 6 elements
    int n = 6;  // The number of elements in the array
    cout << "The median of the array is: ";  // Output message
    getMedian(arr, n);  // Call the function to find and print the median
    return 0;  // Indicate that the program ended successfully
}

