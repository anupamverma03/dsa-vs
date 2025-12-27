#include <iostream>
#include <vector>
using namespace std;

vector<int> printAllIndices(vector<int> arr, int n, int tar, int idx){
    if(idx == n) return {}; // base case returns empty vector

    vector<int> res = printAllIndices(arr, n, tar, idx+1);

    if(arr[idx] == tar){
        res.push_back(idx);
    }
    return res;
}

int main(){
    vector<int> arr = {1, 2, 4, 5, 6, 5, 9, 8, 5};
    int n = arr.size();
    int tar = 5;
    vector<int> ans = printAllIndices(arr, n, tar, 0);

    for(int i : ans){
        cout << i << " ";
    }

}