Q.14. Reverse an array.?

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while(nums[0] != nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};

// another

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int dupli(vector<int>& nums){
     while(nums[0] != nums[nums[0]]){
        swap(nums[0], nums[nums[0]]);
     }
    return nums[0];
}

int main() {
    
    vector<int> nums = {1,2,3,1};
    
    int find = dupli(nums);
    cout<<find;
    
    return 0;
}

[1,3,4,2,2]
Output
2