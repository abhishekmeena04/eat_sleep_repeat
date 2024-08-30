Q.18. Rearrange array in increasing-decreasing order.?

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
	vector<int> arr = {1,8,7,5,6,22};
	int n = arr.size();
	
	sort(arr.begin(), arr.end());
	for(int i=0; i<n/2; i++){
	    cout<<arr[i]<<" ";
	}
	
	for(int i=n-1; i>=n/2; i--){
	    cout<<arr[i]<<" ";
	}
	
}

Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.

Example 2:
Input: 4 2 8 6 15 5 9 20
Output: 2 4 5 6 20 15 9 8


// another

#include <iostream>
#include <vector>
#include <algorithm> // For sort function
using namespace std;

void rearrangeArray(vector<int>& arr) {
    // Sort the array in ascending order
    sort(arr.begin(), arr.end());

    // Create a new array to store the result
    vector<int> result;

    int n = arr.size();

    // Fill the first half with increasing order
    for (int i = 0; i < n / 2; i++) {
        result.push_back(arr[i]);
    }

    // Fill the second half with decreasing order
    for (int i = n - 1; i >= n / 2; i--) {
        result.push_back(arr[i]);
    }

    // Copy the result back to the original array
    arr = result;
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Rearrange the array in increasing-decreasing order
    rearrangeArray(arr);

    // Print the rearranged array
    cout << "The array in increasing-decreasing order is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


Enter the number of elements in the array: 5
Enter the elements of the array: 1 3 2 4 5
The array in increasing-decreasing order is: 1 2 5 4 3
