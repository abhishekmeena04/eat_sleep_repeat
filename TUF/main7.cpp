Q.7 . Find Second Smallest Element in an Array
#include <iostream>
#include <vector>
#include <limits.h>  // For INT_MAX
using namespace std;

int findSecondSmallest(const vector<int>& arr) {
    
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    // Traverse the array to find the smallest and second smallest elements
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;  // Update second smallest
            smallest = arr[i];          // Update smallest
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];    // Update second smallest
        }
    }

    // If secondSmallest was not updated, it means no second smallest exists
    if (secondSmallest == INT_MAX) {
        return -1; // Indicate that there is no second smallest element
    }
    return secondSmallest;
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

    // Finding the second smallest element
    int secondSmallest = findSecondSmallest(arr);

    // Displaying the result
    if (secondSmallest != -1) {
        cout << "The second smallest element in the array is: " << secondSmallest << endl;
    } else {
        cout << "There is no second smallest element in the array." << endl;
    }

    return 0;
}

Enter the number of elements in the array: 5
Enter the elements of the array: 3 1 4 1 5
The second smallest element in the array is: 3
c
Copy code
Enter the number of elements in the array: 5
Enter the elements of the array: 2 2 2 2 2
There is no second smallest element in the array.