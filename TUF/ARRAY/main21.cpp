Problem Statement: Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

Examples:

Example 1:
Input: arr[]= 1 2 3 4 5, num = 3
Output: 2
Explanation: 3 is present in the 2nd index

Example 2:
Input: arr[]= 5 4 3 2 1, num = 5
Output: 0
Explanation: 5 is present in the 0th index


//Binary Search Code:

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find if an element K is present in the sorted array
    int searchInSorted(int arr[], int N, int K) {
        int start = 0;
        int end = N - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;  // Calculate the middle index
            
            // Check if K is present at mid
            if (arr[mid] == K) {
                return 1;  // Element found
            }
            // If K is smaller, ignore the right half
            else if (K < arr[mid]) {
                end = mid - 1;
            }
            // If K is greater, ignore the left half
            else {
                start = mid + 1;
            }
        }
        
        // If we reach here, K is not present in the array
        return -1;
    }
};

int main() {
    int t;
    cin >> t;  // Input number of test cases
    while (t--) {
        int N, K;
        cin >> N >> K;  // Input the size of the array and the target element

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];  // Input the elements of the array
        }

        Solution ob;
        cout << ob.searchInSorted(arr, N, K) << endl;
    }

    return 0;
}

// linear search
#include<stdio.h>

int search(int arr[],int n,int num)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        return i; //return index
        return i+1; //return value
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int num = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = search(arr,n,num);
    printf("%d",val);
}


// return 1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {
       int i;
       for(i=0; i<N;i++){
           if(arr[i]==K){
               return 1;
           }
       }
       return -1;
    }
};

//{ Driver Code Starts.

int main(void) {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }

    return 0;
}

// } Driver Code Ends