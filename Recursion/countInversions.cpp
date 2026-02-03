#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>& nums, int st, int end, int mid){//merging two sorted arrays
    vector<int> temp;
    int i = st;
    int j = mid+1;
    int invCount = 0;
    while(i <= mid && j <=end){
        if(nums[i] <= nums[j]){
            temp.push_back(nums[i]);
            i++;
        } else{
            temp.push_back(nums[j]);
            j++;
            invCount += (mid-i+1);//count no of inversion pairs possible for given elelment in second sorted array
        }
    }
    while(i<=mid){//check for any left elements in left sorted array
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=end){//check for nay left elements in right sorted array
        temp.push_back(nums[j]);
        j++;
    }

    for(int i = 0; i < temp.size(); i++){ //copy merged elements to original array
        nums[st+i] = temp[i];
    }
    return invCount;
}

int mergeSort(vector<int>& nums, int st, int end){//uses merge sort algorithm for count
    if(st<end){
        int mid = st + (end-st)/2;
        int leftInvCount = mergeSort(nums, st, mid);//store all count from left array
        int rightInvCount = mergeSort(nums, mid+1, end);//store count from right array

        int invCount = merge(nums, st, end, mid);//count inversions
        return leftInvCount+rightInvCount+invCount;//total count
    }
    return 0;//check for if only one element present in the array
}
int main(){
    vector<int> nums = {1, 3, 5, 10, 2, 6, 8};
    int st = 0;
    int end = nums.size()-1;
    cout << mergeSort(nums, st, end);
}