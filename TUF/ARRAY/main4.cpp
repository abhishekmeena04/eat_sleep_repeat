Q.4 Reverse a given Array.?


#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        // Swap the elements at start and end
        swap(arr[start], arr[end]);
        // Move towards the center
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    reverseArray(arr);

    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
Original array: 1 2 3 4 5 
Reversed array: 5 4 3 2 1






#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;

        // Swap elements from both ends until the middle is reached
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    solution.reverseArray(arr);

    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}










// another approach with algo
#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

int main() {
    int n;
    
    // Taking the size of the array as input from the user
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    
    // Taking array elements as input from the user
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array in ascending order
    sort(arr.begin(), arr.end());

    // Displaying the sorted array
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
Enter the number of elements in the array: 5
Enter the elements of the array: 5 4 3 2 1
Sorted array: 1 2 3 4 5










// another
#include <iostream>
#include <vector>
using namespace std;

// Function to reverse array using recursion
void reverseArray(vector<int>& arr, int start, int end) {
    if (start < end) {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};

    reverseArray(arr, 0, arr.size() - 1);

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
OUTPUT == 4 3 2 1 



#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        // Reverse the array using the built-in reverse function
        reverse(arr.begin(), arr.end());
    }
    
    void printArray(vector<int>& arr) {
        cout << "The reversed array is: ";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> arr = {5, 4, 3, 2, 1,0};

    Solution solution;
    solution.reverseArray(arr);
    solution.printArray(arr);

    return 0;
}



// optimal
void reverseArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    // Swap elements from start to end
    while (start < end) {
        swap(arr[start], arr[end]);  // Swap start and end elements
        start++;  // Move start pointer towards the center
        end--;    // Move end pointer towards the center

        // reverse(arr, arr + n);
    }
}

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


//
void reverseArray(int arr[], int n) {
   //Reversing elements from index 0 to n-1 
   reverse(arr, arr + n);
}