Q.6. C++ Program to find Largest and Smallest Element in an Array.?

#include <iostream>
#include <vector>
#include <climits>  
#include <utility>

class ArrayOperations {
public:
    // Function to find the smallest and largest elements in the array
    std::pair<int, int> findSmallestAndLargest(const std::vector<int>& arr) {
        if (arr.size() < 2) {
            std::cout << "Array should contain at least two elements." << std::endl;
            return {-1, -1}; // Return a pair of -1 for error handling
        }

        int smallest = arr[0];
        int largest = arr[0];

        // Traverse through the array
        for (auto num : arr) {
            if (num < smallest) {
                smallest = num;
            }
            if (num > largest) {
                largest = num;
            }
        }

        // Return a pair containing both smallest and largest elements
        return {smallest, largest};
    }
};

int main() {
    // Example array
    std::vector<int> arr = {3, 1, 6, 9, 2, 8, 4};

    // Create object and call function
    ArrayOperations obj;
    std::pair<int, int> result = obj.findSmallestAndLargest(arr);

    // Check if valid result and print
    if (result.first != -1 && result.second != -1) {
        std::cout << "Smallest element: " << result.first << std::endl;
        std::cout << "Largest element: " << result.second << std::endl;
    }

    return 0;
}


Enter the number of elements in the array: 5
Enter the elements of the array: 3 1 4 1 5
The largest element in the array is: 5
The smallest element in the array is: 1