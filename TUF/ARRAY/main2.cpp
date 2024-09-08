Q.2: Find the Largest element in an array








with sorting algorithm

#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

int findLargestElement(vector<int>& arr) {
    // Sort the array
    sort(arr.begin(), arr.end());

    // The last element in the sorted array is the largest
    return arr[arr.size() - 1];
}

int main() {
    vector<int> arr = {34, 15, 88, 2, 7, -1, 50};

    int largest = findLargestElement(arr);
    cout << "Largest element in the array: " << largest << endl;

    return 0;
}
Largest element in the array: 88















// actual solution

#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN
using namespace std;

int findLargestElement(const vector<int>& arr) {

    int largest = INT_MIN; 

    // Traverse the array to find the largest element
    for (int num : arr) {
        if (num > largest) {
            largest = num; 
        }
    }
    return largest;
}

int main() {
    vector<int> arr = {34, 15, 88, 2, 7, -1, 50};

    int largest = findLargestElement(arr);
    cout << "Largest element in the array: " << largest << endl;

    return 0;
}
Largest element in the array: 88














//TU4WARD


#include <bits/stdc++.h>
 
using namespace std;
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}

The largest element in the array is: 5
The largest element in the array is: 10

