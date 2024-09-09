Q.15. SORT sortColors - find 0,1,2 in an array asa sorted------Sort Colors (LeetCode 75) | Dutch National Flag Problem,



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            switch (nums[mid]) {
                case 0:
                    swap(nums[mid++], nums[low++]); 
                    break;

                case 1:
                    mid++; 
                    break;

                case 2:
                    swap(nums[mid], nums[high--]); 
                    break;
            }
        }
    }
};


int main() {
    vector<int> nums = {2, 0, 1, 2, 1, 0, 0, 1, 2};
    Solution solution;
    solution.sortColors(nums);

    // Print the sorted colors
    cout << "Sorted colors: ";
    for (int color : nums) {
        cout << color << " ";
    }
    cout << endl;

    return 0;
}


100% complexity
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            switch (nums[mid]) {
                // If the element is 0
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                // If the element is 1
                case 1:
                    mid++;
                    break;
                // If the element is 2
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 1, 2, 1, 0, 0, 1, 2};
    Solution solution;
    solution.sortColors(nums);

    // Print the sorted colors
    cout << "Sorted colors: ";
    for (int color : nums) {
        cout << color << " ";
    }
    cout << endl;

    return 0;
}
