Q. Find first non repeating element in an given array of integer.?


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int, int>freq;
        
        for(auto num : arr){
            freq[num]++;
        }
        
        for(auto num : arr){
            if(freq[num]==1){
                return num;
            }
        }
        return 0;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {5, 4, 5, 4, 2};
    
    cout << solution.firstNonRepeat(arr); // Output should be 2

    return 0;
}
