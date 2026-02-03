#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    //stock prices
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};

    //solution
    vector<int> ans;
    stack<int> s;
    int span;

    for(int i = 0; i < prices.size(); i++){
        while(s.size() > 0 && prices[s.top()] <= prices[i]){
            s.pop();
        }
        if(s.size() == 0){
            span = i+1;
        } else{
            span = i-s.top();
        }
        ans.push_back(span);

        s.push(i);
    }

    for(auto &val:ans){
        cout << val << " ";
    }
    cout << endl;
}