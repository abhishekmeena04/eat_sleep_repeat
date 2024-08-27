Q.15. SORT sortColors

#include <iostream>
#include <vector>  // Include vector library
using namespace std;

void sortColors(vector<int>& colors) {
    int low = 0;
    int mid = 0;
    int high = colors.size() - 1;

    while (mid <= high) {
        if (colors[mid] == 0) {
            swap(colors[low], colors[mid]);
            low++;
            mid++;
        } else if (colors[mid] == 1) {
            mid++;
        } else {
            swap(colors[mid], colors[high]);
            high--;
        }
    }
}

int main() {
    vector<int> colors = {2, 0, 1, 2, 1, 0, 0, 1, 2};

    sortColors(colors);

    // Print the sorted colors
    cout << "Sorted colors: ";
    for (int color : colors) {
        cout << color << " ";
    }
    cout << endl;

    return 0;
}


Sorted colors: 0 0 0 1 1 1 2 2 2