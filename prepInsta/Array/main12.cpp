Q.C++ Program to Counting distinct elements in an array 

#include <iostream>
#include <unordered_set>
using namespace std;

class DistinctElements {
public:
    // Method to count distinct elements in the array
    int countDistinct(int arr[], int n) {
        // Using an unordered_set to store unique elements
        unordered_set<int> distinctSet;

        // Insert each element into the set (duplicates are automatically handled)
        for (int i = 0; i < n; ++i) {
            distinctSet.insert(arr[i]);
        }

        // The size of the set is the number of distinct elements
        return distinctSet.size();
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 2, 1, 5, 3}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Get the size of the array

    DistinctElements de; // Create an object of DistinctElements class
    int distinctCount = de.countDistinct(arr, n); // Call the method to count distinct elements

    cout << "Number of distinct elements: " << distinctCount << endl; // Output the result

    return 0;
}
