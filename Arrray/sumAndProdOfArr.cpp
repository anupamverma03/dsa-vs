#include <iostream>
using namespace std;
int sumArr(int arr[], int n){
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int prodArr(int arr[], int n){
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        val *= arr[i];
    }
    return val;
}
int main (){
    int arr[]= {2, 5, 7, 8, 9, 3, 57};
    int n = sizeof(arr)/sizeof(int);
    cout << sumArr(arr, n) << endl;
    cout << prodArr(arr, n);
}