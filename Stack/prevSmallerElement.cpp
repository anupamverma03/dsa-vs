#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    //vector of integers
    vector<int> nums = {3, 1, 0, 8, 6};
    //solution
    vector<int> ans;
    stack<int> s;

    for(int i = 0; i < nums.size(); i++){
        while(s.size() > 0 && s.top() >= nums[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
        } else{
            ans.push_back(s.top());
        }
        s.push(nums[i]);
    }

    for(auto &val:ans){
        cout << val << " ";
    }
    cout << endl;
}