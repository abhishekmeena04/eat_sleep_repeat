Q.1. Find the smallest element in an array

#include <iostream>
#include <vector>
#include <limits.h> // For INT_MAX
using namespace std;

int findSmallestElement(const vector<int>& arr) {
    int smallest = INT_MAX;

    for (int num : arr) {
        if (num < smallest) {
            smallest = num; 
        }
    }
    return smallest;
}

int main() {
    vector<int> arr = {34, 15, 88, 2, 7, -1, 50};

    int smallest = findSmallestElement(arr);
    cout << "Smallest element in the array: " << smallest << endl;

    return 0;
}

Smallest element in the array: -1














// with sorting algorithm

#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

int findSmallestElement(vector<int>& arr) {

    sort(arr.begin(), arr.end());

    
    return arr[0];
}

int main() {
    vector<int> arr = {34, 15, 88, 2, 7, -1, 50};

    int smallest = findSmallestElement(arr);
    cout << "Smallest element in the array: " << smallest << endl;

    return 0;
}
Smallest element in the array: -1
















ANOTHER SOLUTIN INT MIN = ARR[O]

#include <iostream>
#include <vector>
using namespace std;

int SmallestElement(const vector<int>& arr) {
    int min = arr[0];
    for (int i = 1; i < arr.size(); i++) {  // Start from the second element
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;

    // Taking the size of the first array as input
    cout << "Enter the number of elements in the first array: ";
    cin >> n;

    vector<int> arr1(n);

    // Taking the elements of the first array as input
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Finding the smallest element in the first array
    int min1 = SmallestElement(arr1);
    cout << "The smallest element in the first array is: " << min1 << endl;

    // Taking the size of the second array as input
    cout << "Enter the number of elements in the second array: ";
    cin >> n;

    vector<int> arr2(n);

    // Taking the elements of the second array as input
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Finding the smallest element in the second array
    int min2 = SmallestElement(arr2);
    cout << "The smallest element in the second array is: " << min2 << endl;

    return 0;
}
The smallest element in the array is: 0
The smallest element in the array is: 5



//FINAL=====================================================================================

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSmallest(vector<int>& arr) {
        int min = INT_MAX;

        // Loop through the array to find the minimum element
        for (int num : arr) {
            if (num < min) {
                min = num;
            }
        }
        return min; // Return the smallest element found
    }
};

int main() {
    vector<int> arr = {1, 2, 3};  // Input array

    Solution solution;
    int smallest = solution.findSmallest(arr);  // Find the smallest element

    cout << "The smallest element in the array is: " << smallest << endl;  // Output the result

    return 0;
}



Signed Integer: In a typical 32-bit system, an int can store values in the range of -2^31 to 2^31 - 1
(i.e., from -2147483648 to 2147483647).
INT_MIN is the smallest value: -2147483648.
INT_MAX is the largest value: 2147483647.
These constants are defined in the header <climits> (or <limits.h>).


for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}
This loop will run from 0 to arr.size() - 1, printing each element of the vector.

In summary, arr.size() gives the number of elements in the vector or container you're working with.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector with 5 elements
    vector<int> arr = {10, 20, 30, 40, 50};

    // Getting the size of the vector using arr.size()
    cout << "Size of the array: " << arr.size() << endl;

    return 0;
}
Size of the array: 5
Explanation:
arr.size() returns the number of elements in the vector arr.
In this example, the size is 5, because the vector has 5 elements: {10, 20, 30, 40, 50};