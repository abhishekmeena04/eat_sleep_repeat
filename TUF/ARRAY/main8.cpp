Q.19. Rotate array by K elements : Block Swap Algorithm

void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate the array to the right by k steps
void rotateRight(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // Normalize k if it is greater than n
    
    if (k == 0) return; // No need to rotate if k is 0
    
    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining n - k elements
    reverse(arr, k, n - 1);
}

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}