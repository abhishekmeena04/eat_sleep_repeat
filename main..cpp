Q.1. Find the smallest element in an array
#include <iostream>
#include <vector>
#include <limits.h> // For INT_MAX
using namespace std;

int findSmallestElement(const vector<int>& arr) {
    int smallest = INT_MAX;

    for (int num : arr) {
        if (num < smallest) {
            smallest = num; 
        }
    }
    return smallest;
}

int main() {
    vector<int> arr = {34, 15, 88, 2, 7, -1, 50};

    int smallest = findSmallestElement(arr);
    cout << "Smallest element in the array: " << smallest << endl;

    return 0;
}
