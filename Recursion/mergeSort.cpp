#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int l, int mid, int r){
    vector<int> temp(r-l+1, 0);
    int idx = r-l;
    int i = mid;
    int j = r;
    while(i >= l && j>=mid+1){
        if(nums[i] >= nums[j]){
            temp[idx] = nums[i];
            idx--; i--;
        } else{
            temp[idx] = nums[j];
            idx--; j--;
        }
    }
    // place any left elements in right array
    while(i >= l){
        temp[idx] = nums[i];
        idx--; i--;
    }
    while(j>=mid+1){
        temp[idx] = nums[j];
        idx--; j--;
    }

    //copy temp into nums vector in place
    for(int i = 0; i < temp.size(); i++){
        nums[l+i] = temp[i];
    }

}
void mergeSort(vector<int>& nums, int l, int r){
    if(l>=r){
        return;
    }
    //devide the array and call for sorting two halves
    int mid = l + (r-l)/2;
    mergeSort(nums, l, mid);
    mergeSort(nums, mid+1, r);

    //merge two arrays when returning from recursion
    merge(nums, l, mid, r);
}
int main(){
    vector<int> nums = {1, 9, 45, 6, 89, 3, 65, 3, 5, 90};
    int n = nums.size()-1;
    mergeSort(nums, 0, n);

    //print sorted array;
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
}