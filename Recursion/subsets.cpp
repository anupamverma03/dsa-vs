#include <iostream>
#include <vector>
using namespace std;


void pS(vector<int> &arr, vector<int> &ans, int i){
    if(i == arr.size()){
        for(int val:ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[i]); // work in current stack
    pS(arr, ans, i+1); // call for next element

    ans.pop_back(); // not required step as ans is passed after updating to every function call
    pS(arr, ans, i+1);
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    pS(arr, ans, 0);
}