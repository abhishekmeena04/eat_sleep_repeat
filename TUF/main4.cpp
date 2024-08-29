Q.4 Reverse a given Array
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
