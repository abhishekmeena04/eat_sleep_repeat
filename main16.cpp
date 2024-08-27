Q.16. Remove Duplicates from Sorted Array
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;

    int uniqueIndex = 0;  // Pointer to place unique elements

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[uniqueIndex]) {
            uniqueIndex++;
            nums[uniqueIndex] = nums[i];
        }
    }

    // Return the length of the array with unique elements
    return uniqueIndex + 1;
}

int main() {
    int n;

    // Taking the size of the array as input
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);

    // Taking the elements of the array as input
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Removing duplicates
    int newLength = removeDuplicates(nums);

    // Displaying the array with unique elements
    cout << "The array with unique elements is: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "The new length of the array is: " << newLength << endl;

    return 0;
}

Enter the number of elements in the array: 6
Enter the elements of the sorted array: 1 1 2 2 3 4
The array with unique elements is: 1 2 3 4
The new length of the array is: 4
