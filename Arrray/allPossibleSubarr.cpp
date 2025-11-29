#include <iostream>
#include <vector>
using namespace std;
int mxSum( int arr[], int n){
    int maxSum = INT8_MIN;
    for(int i = 0; i < n; i++){
        int currSum = 0;
        for(int j = i; j < n; j++ ){
            currSum += arr[j];
            if(currSum>maxSum){
                maxSum = currSum;
                }
            }
        }
        return maxSum;
    }

int main(){
    int arr[] = {1, -2, 3, -2, 5};
    int n = sizeof(arr)/sizeof(int);
    cout << mxSum(arr, n);
}