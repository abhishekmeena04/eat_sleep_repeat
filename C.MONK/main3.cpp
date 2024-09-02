array subset of another array

ChatGPT
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isSubset(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freqMap;

        // Count the frequency of each element in arr1
        for (int num : arr1) {
            freqMap[num]++;
        }

        // Check if all elements in arr2 are present in arr1 with sufficient frequency
        for (int num : arr2) {
            if (freqMap[num] == 0) {
                return false; // Element from arr2 not found in arr1
            }
            freqMap[num]--; // Decrease the count for the found element
        }

        return true; // All elements of arr2 found in arr1 with sufficient frequency
    }
};

int main() {
    Solution solution;

    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {2, 4, 6};

    bool result = solution.isSubset(arr1, arr2);

    if (result) {
        cout << "arr2 is a subset of arr1" << endl;
    } else {
        cout << "arr2 is NOT a subset of arr1" << endl;
    }

    return 0;
}



// cm

string isSubset(int a1[], int a2[], int n, int m){

    map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[a1[i]]++;
    }

    for(int i=0; i<m;i++){
        if(freq[a2[i]>0]){
            freq[a2[i]]--;
        }else{
            return "No";
        }
    } 
    return "Yes";
    
}