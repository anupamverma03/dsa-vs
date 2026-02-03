/* For a given array of nums, findthe next greater element for every element in the nums array.*/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    //vector of numbers
    vector<int> nums = {6, 8, 0, 1, 5};
    //solution for next greater elemwnt
    vector<int> ans(nums.size(), 0);
    stack<int> s;

    for(int i = nums.size()-1; i >= 0; i--){
        while(s.size() > 0 && s.top() <= nums[i]){
            s.pop();
        }
        if(s.size() == 0){
            ans[i] = -1;
        } else{
            ans[i] = s.top();
        }
        s.push(nums[i]);
    }

    for(auto &val:ans){
        cout << val << " ";
    }
    cout << endl;
    
}