Q. Find first non repeating element in an given array of integer.?


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstNonRepeat(vector<int>& arr) {
        unordered_map<int, int> mp;
        
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++; 
        }
        
        
        for (int i = 0; i < arr.size(); i++) {
            if (mp[arr[i]] == 1) {
                return arr[i];
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {5, 4, 5, 4, 2};
    
    cout << solution.firstNonRepeat(arr); // Output should be 2

    return 0;
}
