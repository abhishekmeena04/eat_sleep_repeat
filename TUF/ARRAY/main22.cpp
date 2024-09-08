    //Find the smallest and second smallest element
    
    pair<int, int> findSmallestAndSecondSmallest(vector<int>& arr) {
    if (arr.size() < 2) {
        // If the array has less than 2 elements, we cannot find second smallest
        return {-1, -1};
    }
    
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    
    // Traverse through the array
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;  // Update second smallest
            smallest = arr[i];           // Update smallest
        } else if (arr[i] > smallest && arr[i] < second_smallest) {
            second_smallest = arr[i];    // Update second smallest
        }
    }
    
    // If second_smallest is still INT_MAX, it means there was no second smallest element
    if (second_smallest == INT_MAX) {
        return {-1, -1};
    }
    
    return {smallest, second_smallest};
}
