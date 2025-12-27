#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& nums, int r, int c, int max){
    if(r == 0){ // base case
        return;
    }
    if(c<r){
        if(nums[c] > nums[max]){ //assume that 1st element is largest
            selectionSort(nums, r, c+1, c);
        } else{
            selectionSort(nums, r, c+1, max);
        }
    } else{
            swap(nums[r-1], nums[max]);
            selectionSort(nums, r-1, 0, 0); //call for next unsorted n-1 part
    }
}
int main(){
    vector<int> nums = {1, 5, 7, 8, 3, 4, 2};
    int n  = nums.size();
    selectionSort(nums, n, 0, 0);

    for(int index : nums){ //for each
        cout << index << " ";
    }
}