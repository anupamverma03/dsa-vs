#include <iostream>
#include <vector>
using namespace std;
void selectionSort(int arr[], int n){
      
    for(int i = 0; i < n-1; i++){
        int startingIdx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                startingIdx = j;
            }
        }
        swap(arr[i], arr[startingIdx]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int main (){
    int arr[] = {1, 4, 5, 200, 8, 9};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
}