#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int> nums){
    vector<vector<int>> subsets;

    subsets.push_back({});

    for(auto x:nums){
        int currSize = subsets.size();
        for(int i = 0; i < currSize; i++){
            vector<int> newSubset = subsets[i];
            newSubset.push_back(x);
            subsets. push_back(newSubset);
        }
    }

    for(auto &x:subsets){
        cout << "{ ";
        for(auto &y:x) cout << y << " ";
        cout << "}" << endl;
    }
}

int main(){
    vector<int> nums = {1, 2, 3};
    printSubsets(nums);
}