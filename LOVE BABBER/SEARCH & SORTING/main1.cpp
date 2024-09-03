// search element in sorted array in binary search.?//
class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s) / 2;
        
        while(s<=e){
            if(arr[mid]==k){
            return mid;
            }
            else if(k<arr[mid]){
            e = mid-1;
            }
            else{
            s = mid+1;
            }
            mid = s + (e-s) / 2;
        }
        return -1;
    }
};