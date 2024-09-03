//total number of occurance./

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchRange(vector<int>& arr, int target) {
        int s = 0;
        int e = arr.size() - 1;
        int mid;
        int first = -1;
        
        // Find the first occurrence of the target
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (arr[mid] == target) {
                first = mid;
                e = mid - 1;  // Continue searching to the left
            } else if (target < arr[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        if (first == -1) {
            // Target not found, so the total occurrence is 0
            return 0;
        }

        // Reset s and e for finding the last occurrence
        s = 0;
        e = arr.size() - 1;
        int last = -1;

        // Find the last occurrence of the target
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (arr[mid] == target) {
                last = mid;
                s = mid + 1;  // Continue searching to the right
            } else if (target < arr[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        // Calculate the total occurrences
        int totalocc = last - first + 1;
        return totalocc;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 1, 2, 2, 2, 2, 3};
    int target = 2;

    int totalocc = solution.searchRange(arr, target);

    cout << "Total occurrences of " << target << ": " << totalocc << endl;

    return 0;
}
