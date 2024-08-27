Q.1. Find Second Smallest and Second Largest Element in an array

#include <iostream>
#include <vector>
#include <limits.h> // For INT_MAX and INT_MIN
using namespace std;

void findSecondSmallestAndLargest(const vector<int>& arr, int& secondSmallest, int& secondLargest) {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    secondSmallest = INT_MAX;
    secondLargest = INT_MIN;

    for (int num : arr) {
        // Find the smallest and second smallest
        if (num < smallest) {
            secondSmallest = smallest;
            smallest = num;
        } else if (num < secondSmallest && num != smallest) {
            secondSmallest = num;
        }

        // Find the largest and second largest
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }
}

int main() {
    vector<int> arr = {34, 15, 88, 2, 7, -1, 50};

    int secondSmallest, secondLargest;
    findSecondSmallestAndLargest(arr, secondSmallest, secondLargest);

    cout << "Second smallest element: " << secondSmallest << endl;
    cout << "Second largest element: " << secondLargest << endl;

    return 0;
}

