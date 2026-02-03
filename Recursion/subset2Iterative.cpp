#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printSubsets(vector<int>& nums){
    sort(nums.begin(), nums.end());
    vector<vector<int>> subsets;

    subsets.push_back({});

    int st = 0, end = 0;
    for(int i = 0; i < nums.size(); i++){
        st = 0;
        if(i>0 && nums[i] == nums[i-1]){
            st = end+1;
        }
        end = subsets.size()-1;
        
        for(int j = st; j <= end; j++){
            vector<int> newSubset = subsets[j];
            newSubset.push_back(nums[i]);
            subsets.push_back(newSubset);
        }
    }
    for(auto &x:subsets){
        cout << "{ ";
        for(auto &y:x) cout << y << " ";
        cout << "}" << endl;
    }
    
    
}

int main(){
    vector<int> nums = {1, 2, 2};
    printSubsets(nums);
}