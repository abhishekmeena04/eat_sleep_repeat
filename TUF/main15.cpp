Q.15. Find all the non-repeating elements in an array.?

#include<bits/stdc++.h>
using namespace std;

void findNonRepeatingElement(vector<int>& nums) {
    // hashmap storing elements in the array as 
    // key and their occurrences as value.
    unordered_map<int,int> hashMap;

    for(auto i:nums) ++hashMap[i];
    // if the count of elements equals to 1, it is a non-repeating element.
    for(auto pairInMap:hashMap) 
        if(pairInMap.second == 1) cout<<pairInMap.first<<" ";
}

int main() {
    vector<int> nums = {1,2,-1,1,3,1};
    cout<<"Non-repeating numbers are: "<<endl;
    findNonRepeatingElement(nums);
    
    return 0;
}

Example 1:
Input:
 Nums = [1,2,-1,1,3,1]
Output:
 2,-1,3
Explanation:
 1 is the only element in the given array which occurs thrice in the array. -1,2,3 occurs only once and hence, these are non-repeating elements of the given array.

Example 2:
Input:
 Nums = [1,2,3]
Output:
 1,2,3
Explanation:
 All elements present in the array occur once. Hence, every element is non-repeating.