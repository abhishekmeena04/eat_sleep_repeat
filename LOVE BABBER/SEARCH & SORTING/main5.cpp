//search in a roated dorted array using binary search


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;

            // If the target is found at mid
            if (nums[mid] == target) {
                return mid;
            }
            
            // Determine which side is properly sorted
            if (nums[s] <= nums[mid]) {
                // Left side is sorted
                if (nums[s] <= target && target < nums[mid]) {
                    e = mid - 1; // Search in the left half
                } else {
                    s = mid + 1; // Search in the right half
                }
            } else {
                // Right side is sorted
                if (nums[mid] < target && target <= nums[e]) {
                    s = mid + 1; // Search in the right half
                } else {
                    e = mid - 1; // Search in the left half
                }
            }
        }
        
        // If the target is not found
        return -1;
    }
};
