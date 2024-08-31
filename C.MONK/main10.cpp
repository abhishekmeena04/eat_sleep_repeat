Q. Search a number in an array.?


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findElement(vector<int>& arr, int x) {
        // Iterate through the array
        for (int i = 0; i < arr.size(); i++) {
            // Check if the current element matches x
            if (arr[i] == x) {
                return i; // Return the index of the first occurrence
            }
        }
        return -1; // If not found, return -1
    }
};

int main() {
    vector<int> arr = {2, 4, 3, 5, 6};
    int x = 5;
    
    Solution solution;
    int result = solution.findElement(arr, x);
    
    if (result != -1) {
        cout << "Element " << x << " found at index " << result << endl;
    } else {
        cout << "Element " << x << " not found in the array" << endl;
    }
    
    return 0;
}
