Q.12. Remove Duplicates From an Unsorted Array.?

#include <bits/stdc++.h>
using namespace std ;

class removeDuplicate {
public:
    void duplicate(int arr[], int n) {

        map<int, int>mp ;

        for (int i = 0; i < n; i++) {
            if (mp.find(arr[i]) == mp.end()) {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
    }
};
int main() {

    int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34};
    int n = 9;

    removeDuplicate d1  ;
    d1.duplicate(arr, n) ;

    return 0 ;
}

Example 1:
Input: arr[]={2,3,1,9,3,1,3,9}
Output:  {2,3,1,9}

Explanation: Removed all the duplicate elements

Example 2:
Input: arr[]={4,3,9,2,4,1,10,89,34}
Output: {3,4,9,2,1,10,34,89}
Explanation: Removed all the duplicate elements


A hash set is a data structure that helps us store unique elements. When we add elements to a set, it automatically prevents duplicates, meaning it will only store each element once.
In this approach, we’ll use a set to track the elements we’ve already encountered while traversing the array.

///
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen; // To track unique elements
        int k = 0; // Index to store the unique elements in place
        
        for (int i = 0; i < nums.size(); i++) {
            // If the element is not in the set, it's unique
            if (seen.find(nums[i]) == seen.end()) {
                seen.insert(nums[i]); // Add the element to the set
                nums[k] = nums[i];    // Place the unique element in the array
                k++;
            }
        }

        // Resize the array to include only the unique elements
        nums.resize(k);
        return nums;
        
    }
};



