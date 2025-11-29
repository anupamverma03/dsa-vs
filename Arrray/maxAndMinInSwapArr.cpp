#include <iostream>
using namespace std;

int min(int arr[], int n){
    int min = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min){
            min = i;
        }
    }
    return min;
}
int max(int arr[], int n){
    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = i;
        }
    }
    return max;
}

void swap(int arr[], int n){
    int temp = arr[min(arr, n)];
    arr[min(arr, n)] = arr[max(arr, n)];
    arr[max(arr, n)] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main (){
    int arr[] = {2, 5, 6, 4, 8, 9};
    int n = sizeof(arr)/sizeof(int);
    swap(arr, n);
}