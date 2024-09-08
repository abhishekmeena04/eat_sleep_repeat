Q.16. Remove Duplicates from Sorted Array
#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}



// 
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        // Pointer `k` points to the last unique element
        int k = 0;
        
        // Traverse the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k]) {
                k++; // Move to the next unique position
                nums[k] = nums[i]; // Update the next unique position with the new unique element
            }
        }
        
        // Return the number of unique elements, which is k + 1
        return k + 1;
    }
};
