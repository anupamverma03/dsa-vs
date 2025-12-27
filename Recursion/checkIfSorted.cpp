#include <iostream>
using namespace std;

bool sorted(int arr[], int n, int idx){
    if(idx == n) return true;
    if(arr[idx]>arr[idx+1]){
        return false;
    }
    return sorted(arr, n, idx+1);
}

int main(){
    int arr[] = {1, 4, 6, 12, 14};
    int n = sizeof(arr)/sizeof(int)-1;
    cout << sorted(arr, n, 0);
}