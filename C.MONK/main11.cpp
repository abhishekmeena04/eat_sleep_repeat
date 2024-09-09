Q. Search a number in an array by Binary search.?

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == x) {
            return mid;  // Return the index of x
        }
        else if (arr[mid] < x) {
            left = mid + 1;  // Search in the right half
        }
        else {
            right = mid - 1;  // Search in the left half
        }
    }
    return -1;  // Element not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int x = 3;
    int result = binarySearch(arr, x);
    cout << result << endl;
    return 0;
}
