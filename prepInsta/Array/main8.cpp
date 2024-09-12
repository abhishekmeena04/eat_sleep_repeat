Q. Sort the elements of an array :..?
#include <iostream>
using namespace std;

// Function to sort the array in ascending order
void sortArray(int arr[], int n) {
    // Implementing simple bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sortArray(arr, n);

    // Print the sorted array
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
Enter the number of elements in the array: 5
Enter the elements of the array: 9 7 3 5 1
Output:
The sorted array is: 1 3 5 7 9