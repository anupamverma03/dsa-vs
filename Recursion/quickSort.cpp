#include <iostream>
#include <vector>
using namespace std;

    void quickSort(vector<int>& nums, int low, int high){
        if(low>=high){
            return;
        }
        int st = low;
        int end = high;
        int mid = st + (end-st)/2;
        int pivot = nums[mid];
        while(st<=end){
            while(nums[st] < pivot) st++;
            while(nums[end] > pivot) end--;
            if(st<=end){ // this additional check makes sure than only unsorted parts will be passed to future calls
                swap(nums[st], nums[end]);
                st++; end--;
            }
        }
        //recursive calls for left and right part of array to the pivot element
        quickSort(nums, low, end);
        quickSort(nums, st, high);
    }
int main(){
    vector<int> nums = {5, 4, 3, 1, 89, 7, 9};
    int n = nums.size()-1;
    quickSort(nums, 0, n);
    //print hte sorted array
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
}