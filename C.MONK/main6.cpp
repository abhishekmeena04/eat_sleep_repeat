Q. Remove duplicate elements from an sorted array.?

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int remove_duplicate(vector<int>& arr) {
        int i = 0;
        // Loop through the array starting from the second element
        for (int j = 1; j < arr.size(); j++) {
            // If the current element is different from the last unique element
            if (arr[i] != arr[j]) {
                i++;           // Move the index of the unique element forward
                arr[i] = arr[j]; // Update the position with the new unique element
            }
        }
        return i + 1; // The length of the array with unique elements
    }
};

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    
    Solution solution;
    int newLength = solution.remove_duplicate(arr);
    
    cout << "The array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Length of array with unique elements: " << newLength << endl;

    return 0;
}

The array after removing duplicates: 1 2 3 4 5 
Length of array with unique elements: 5
