Q.8. Calculate the sum of elements in an array :
#include <iostream>
#include <vector>
using namespace std;

int calculateSum(const vector<int>& arr) {
    int sum = 0;

    // Iterate through the array and add each element to the sum
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int n;

    // Taking the size of the array as input
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    // Taking the elements of the array as input
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculating the sum of the elements
    int sum = calculateSum(arr);

    // Displaying the sum
    cout << "The sum of the elements in the array is: " << sum << endl;

    return 0;
}
