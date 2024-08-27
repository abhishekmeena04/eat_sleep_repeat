#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void countFrequencies(const vector<int>& arr) {
    unordered_map<int, int> frequencyMap;

    // Counting the frequency of each element
    for (int i = 0; i < arr.size(); i++) {
        frequencyMap[arr[i]]++;
    }

    // Displaying the frequency of each element
    cout << "Element Frequency" << endl;
    for (auto& pair : frequencyMap) {
        cout << pair.first << " : " << pair.second << endl;
    }
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

    // Counting and displaying the frequency of each element
    countFrequencies(arr);

    return 0;
}
