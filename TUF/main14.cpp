Q.14. Find all repeating elements in an array.?

#include<bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int>& arr) {
    unordered_map<int,int> elementCount;
    for(auto i:arr) ++elementCount[i];
    
    cout<<"The repeating elements are: ";
    for(auto i:elementCount) {
        if(i.second > 1) cout<<i.first<<" ";
    }
}

int main() {
    vector<int> arr = {1,1,2,3,4,4,5,2};
    findRepeatingElements(arr);
    
    return 0;
}

Example 1:
Input: 
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
Explanation:
 1,2 and 4 are the elements which are occurring more than once.

Example 2:
Input:
 Arr[] = [1,1,0]
Output:
 1
Explanation:
 Only 1 is occurring more than once in the given array.