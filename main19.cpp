Q.19. Rotate array by K elements : Block Swap Algorithm
class Solution {
public:
    
    void reverse(vector<int> &num, int low, int high){
        while(low < high){
            swap(num[low], num[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        int n = (int)nums.size();
        k = k%n;
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
};

// another

#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a part of the array from index start to end
void reverseArray(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // In case k is greater than the size of the array

    // Step 1: Reverse the entire array
    reverseArray(arr, 0, n - 1);
    // Step 2: Reverse the first k elements
    reverseArray(arr, 0, k - 1);
    // Step 3: Reverse the remaining n-k elements
    reverseArray(arr, k, n - 1);
}

int main() {
    int n, k;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the number of positions to rotate
    cout << "Enter the number of elements to rotate by: ";
    cin >> k;

    // Rotate the array
    rotateArray(arr, k);

    // Print the rotated array
    cout << "The rotated array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
