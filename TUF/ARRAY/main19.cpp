Check if array is subset of another array


12

0
Check if array is subset of another array.

Write a program to find whether an array is a subset of another array or not.

Given arr1[] and arr2[], we need to find whether arr1[] is a subset of arr2[]. An array is called a subset of another if all of its elements are present in the other array.

Note: Array elements are assumed to be unique.

Examples:

Example 1:
Input: arr1[]= [1,3,4,5,2]
       arr2[]= [2,4,3,1,7,5,15]
Output: arr1[] is a subset of arr2[]

Example 2:
Input: arr1[]= [1,3,4,5,2]
       arr2[]= [4,5,2]
Output: arr1[] is not a subset of arr2[]

Example 3:
Input: arr1[]= [1,3,4,5,2]
       arr2[]= [11,12,13,15,16]
Output: arr1[] is not a subset of arr2[]





    #include <iostream>
    #include <vector>
    #include <unordered_set>
    using namespace std;

    bool isSubset(const vector<int>& arr1, const vector<int>& arr2) {
        // Create a set from arr2
       
       

    }

    int main() {
        vector<int> arr1 = {1, 3, 4, 5, 2};
        vector<int> arr2 = {2, 4, 3, 1, 7, 5, 15};
        
        if (isSubset(arr1, arr2)) {
            cout << "arr1[] is a subset of arr2[]" << endl;
        } else {
            cout << "arr1[] is not a subset of arr2[]" << endl;
        }
        
        return 0;
    }
