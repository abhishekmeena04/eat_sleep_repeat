Q.14. Find all non repeating elements in an array.?

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find the first non-repeating element in the array
int firstNonRepeatingElement(vector<int>& arr) {
    unordered_map<int, int> freqMap;

    // Step 1: Count the frequency of each element
    for (int i = 0; i < arr.size(); i++) {
        freqMap[arr[i]]++;
    }

    // Step 2: Traverse the array again to find the first non-repeating element
    for (int i = 0; i < arr.size(); i++) {
        if (freqMap[arr[i]] == 1) {
            return arr[i]; // First non-repeating element
        }
    }

    // Step 3: If no non-repeating element found, return 0
    return 0;
}

int main() {
    // Example 1
    vector<int> arr1 = {-1, 2, -1, 3, 2};
    cout << "First non-repeating element: " << firstNonRepeatingElement(arr1) << endl;  // Output: 3

    // Example 2
    vector<int> arr2 = {1, 1, 1};
    cout << "First non-repeating element: " << firstNonRepeatingElement(arr2) << endl;  // Output: 0

    return 0;
}



Example 1:
Input:
 Nums = [1,2,-1,1,3,1]
Output:
 2,-1,3
Explanation:
 1 is the only element in the given array which occurs thrice in the array. -1,2,3 occurs only once and hence, these are non-repeating elements of the given array.

Example 2:
Input:
 Nums = [1,2,3]
Output:
 1,2,3
Explanation:
 All elements present in the array occur once. Hence, every element is non-repeating.