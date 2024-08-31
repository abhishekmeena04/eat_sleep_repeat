Q.write smallest and second smallest element in an array

#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX

using namespace std;

class Solution {
public:
    pair<int, int> findSmallestAndSecondSmallest(vector<int>& arr) {
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for (int num : arr) {
            if (num < smallest) {
                // Update second smallest before updating the smallest
                secondSmallest = smallest;
                smallest = num;
            } else if (num < secondSmallest && num != smallest) {
                // Update second smallest only if it's greater than num and num is not equal to smallest
                secondSmallest = num;
            }
        }

        // Check if the second smallest exists
        if (secondSmallest == INT_MAX) {
            return {-1, -1};
        } else {
            return {smallest, secondSmallest};
        }
    }
};

int main() {
    vector<int> arr = {2, 4, 3, 5, 6};

    Solution solution;
    pair<int, int> result = solution.findSmallestAndSecondSmallest(arr);

    if (result.first == -1) {
        cout << "-1" << endl;
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
