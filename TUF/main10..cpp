#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;

// Function to calculate the median of the array
double findMedian(vector<int>& arr) {
    int n = arr.size();

    // Sort the array
    sort(arr.begin(), arr.end());

    // If the number of elements is odd, return the middle element
    if (n % 2 != 0) {
        return arr[n / 2];
    }
    // If the number of elements is even, return the average of the two middle elements
    else {
        return (arr[n / 2] + arr[(n / 2) - 1]) / 2.0;
    }
}

int main() {
    // Test case 1
    vector<int> arr1 = {2, 4, 1, 3, 5};
    cout << "Median: " << findMedian(arr1) << endl; // Output: 3

    // Test case 2
    vector<int> arr2 = {2, 5, 1, 7};
    cout << "Median: " << findMedian(arr2) << endl; // Output: 3.5

    return 0;
}
