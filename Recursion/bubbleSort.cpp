#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& nums, int r, int c){
    if(r == 0){
        return;
    }
    if(c<r){
        if(nums[c] > nums[c+1]){
            swap(nums[c], nums[c+1]);
        }
        bubbleSort(nums, r, c+1);
    } else{
            bubbleSort(nums, r-1, 0);
    }
}
int main(){
    vector<int> nums = {1, 5, 7, 8, 3, 4, 2};
    int n  = nums.size()-1;
    bubbleSort(nums, n, 0);

    for(int index : nums){
        cout << index << " ";
    }
}