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