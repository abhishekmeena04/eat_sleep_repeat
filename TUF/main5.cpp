#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void frequency(vector<int>& arr){
    unordered_map<int, int> map;
    
    for(int i=0; i<arr.size(); i++){
        map[arr[i]]++;
    }
    
    for(auto x: map){
        cout<<x.first <<" " <<x.second<<endl;
    }
    
}

int main() {
    
    vector<int> arr = {1,2,1,2};
    frequency(arr);

    return 0;
    
}
