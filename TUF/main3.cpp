Q.1. Find Second Smallest and Second Largest Element in an array

#include <iostream>
#include <vector>
#include <limits.h> // For INT_MAX and INT_MIN
using namespace std;

void findSecondSmallestAndLargest(const vector<int>& arr, int& secondSmallest, int& secondLargest) {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    secondSmallest = INT_MAX;
    secondLargest = INT_MIN;

    for (int num : arr) {
        // Find the smallest and second smallest
        if (num < smallest) {
            secondSmallest = smallest;
            smallest = num;
        } else if (num < secondSmallest && num != smallest) {
            secondSmallest = num;
        }

        // Find the largest and second largest
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }
}

int main() {
    vector<int> arr = {34, 15, 88, 2, 7, -1, 50};

    int secondSmallest, secondLargest;
    findSecondSmallestAndLargest(arr, secondSmallest, secondLargest);

    cout << "Second smallest element: " << secondSmallest << endl;
    cout << "Second largest element: " << secondLargest << endl;

    return 0;
}
Second smallest element: 2
Second largest element: 50


// FINAL-----------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <limits.h> // for INT_MAX and INT_MIN

using namespace std;

class Solution {
public:
    vector<int> findSmallestAndLargest(vector<int>& arr) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        int secondSmallest = INT_MAX;
        int secondLargest = INT_MIN;
        
        for (int num : arr) {
            // Check for smallest and second smallest
            if (num < smallest) {
                secondSmallest = smallest;
                smallest = num;
            } else if (num < secondSmallest && num != smallest) {
                secondSmallest = num;
            }
            
            // Check for largest and second largest
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }
        
        return {smallest, secondSmallest, largest, secondLargest};
    }
};

int main() {
    Solution solution;
    vector<int> arr = {3, 1, 4, 5, 2, 9, 7};
    
    vector<int> result = solution.findSmallestAndLargest(arr);
    
    // Output the results
    cout << "Smallest: " << result[0] << endl;            // Smallest: 1
    cout << "Second Smallest: " << result[1] << endl;     // Second Smallest: 2
    cout << "Largest: " << result[2] << endl;             // Largest: 9
    cout << "Second Largest: " << result[3] << endl;      // Second Largest: 7
    
    return 0;
}


///

#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;

    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}