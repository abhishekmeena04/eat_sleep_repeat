Q.12. Remove Duplicates From an Unsorted Array.?

#include <bits/stdc++.h>
using namespace std ;

class removeDuplicate {

public:

    void duplicate(int arr[], int n) {

        map<int, int>mp ;

        for (int i = 0; i < n; i++) {
            if (mp.find(arr[i]) == mp.end()) {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
    }

} ;
int main() {

    int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34} ;
    int n = 9  ;

    removeDuplicate d1  ;
    d1.duplicate(arr, n) ;

    return 0 ;
}

Example 1:
Input: arr[]={2,3,1,9,3,1,3,9}
Output:  {2,3,1,9}

Explanation: Removed all the duplicate elements

Example 2:
Input: arr[]={4,3,9,2,4,1,10,89,34}
Output: {3,4,9,2,1,10,34,89}
Explanation: Removed all the duplicate elements