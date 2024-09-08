Q. Search an Element in an Array : Program CPP Java

Problem Statement: Search an element in an array and return its position

Examples:

Example 1:
Input: array[] = {1,2,3,4,5} k=3                                                                              
Output: 2                                                                                                              
Explanation: The answer is 2 because 3 is present at 2nd index.

Example 2:
Input: array[]={6,7,9,5,3,10} k=10
Output: 5
Explanation: The answer is 5 because 10 is present at 5th index.



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {6, 7, 9, 5, 3, 10};
	int k = 10;
	int ans = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			ans = i;
			break;
		}
	}
	cout <<"The element is present in " <<ans<<" index";
}


#include <iostream>
using namespace std;

// Function to search for an element in the array
int searchElement(const int arr[], int size, int k) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == k) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    int result = searchElement(arr, size, k);
    
    if (result != -1) {
        cout << "Element " << k << " is present at index " << result << endl;
    } else {
        cout << "Element " << k << " is not present in the array" << endl;
    }
    
    return 0;
}
