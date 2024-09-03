//fisrt and last occurance of an array
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int s = 0;
        int e = arr.size() - 1;
        int mid;
        int first = -1;
        
        // Find the first occurrence
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

        // Reset s and e for finding the last occurrence
        s = 0;
        e = arr.size() - 1;
        int last = -1;

        // Find the last occurrence
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
        
        return {first, last};
    }
};
