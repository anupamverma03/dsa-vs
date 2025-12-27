#include <iostream>
using namespace std;

int linSearch(int arr[], int n, int tar, int idx){
    if(idx == n) return -1;
    if(arr[idx] == tar) return idx;
    return linSearch(arr, n, tar, idx+1);
}

int main(){
    int arr[] = {1, 4, 6, 8, 17, 67, 88};
    int tar = 1;
    int n = sizeof(arr)/sizeof(int);
    cout << linSearch(arr, n, tar, 0);
}