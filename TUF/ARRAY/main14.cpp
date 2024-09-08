Q.14. Find all repeating elements in an array.?

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find all repeating elements
void findRepeatingElements(vector<int>& arr) {
    unordered_map<int, int> freqMap;

    // Traverse through the array and store frequencies of elements
    for (int i = 0; i < arr.size(); i++) {
        freqMap[arr[i]]++;
    }

    // Output the repeating elements
    cout << "Repeating elements are: ";
    for (auto it : freqMap) {
        if (it.second  1) {
            cout << it.first << " ";  // Print elements with frequency > 1
        }
    }
    cout << endl;   
}

int main() {
    // Example 1
    vector<int> arr1 = {1, 1, 2, 3, 4, 4, 5, 2};
    findRepeatingElements(arr1);  // Output: 1 2 4

    // Example 2
    vector<int> arr2 = {1, 1, 0};
    findRepeatingElements(arr2);  // Output: 1

    return 0;
}


Example 1:
Input: 
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
Explanation:
 1,2 and 4 are the elements which are occurring more than once.

Example 2:
Input:
 Arr[] = [1,1,0]
Output:
 1
Explanation:
 Only 1 is occurring more than once in the given array.