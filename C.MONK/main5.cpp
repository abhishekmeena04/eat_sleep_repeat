Q. frequency of limited range array elements

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void frequencyOfElements(vector<int>& arr) {
        unordered_map<int, int> mp;

        // Count frequencies of each element in the array
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        // Replace each element in the array with its frequency
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[i+1];
        }
    }
};

int main() {
    vector<int> arr = {2, 3, 2, 3, 5};

    Solution solution;
    solution.frequencyOfElements(arr);

    // Output the modified array
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
