Q.6. C++ Program to find Largest and Smallest Element in an Array.?
#include <iostream>
#include <vector>
using namespace std;

void findLargestAndSmallest(const vector<int>& arr, int& largest, int& smallest) {
    largest = arr[0];
    smallest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
}

int main() {
    int n;

    // Taking the size of the array as input
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    // Taking the elements of the array as input
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest, smallest;

    // Finding the largest and smallest elements
    findLargestAndSmallest(arr, largest, smallest);

    // Displaying the results
    cout << "The largest element in the array is: " << largest << endl;
    cout << "The smallest element in the array is: " << smallest << endl;

    return 0;
}
