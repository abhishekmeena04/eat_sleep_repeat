Search an Element in an Array : Program CPP Java

Problem Statement: Search an element in an array and return its position

Examples:

Example 1:
Input: array[] = {1,2,3,4,5} k=3                                                                              
Output: 2                                                                                                              
Explanation: The answer is 2 because 3 is present at 2nd index.

Example 2:
Input: array[]={6,7,9,5,3,10} k=10
Output: 5
Explanation: The answer is 5 because 10 is present at 5th index.



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {6, 7, 9, 5, 3, 10};
	int k = 10;
	int ans = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			ans = i;
			break;
		}
	}
	cout <<"The element is present in " <<ans<<" index";
}
