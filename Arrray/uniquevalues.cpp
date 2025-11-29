#include <iostream>
using namespace std;
// void uniqueVal(int arr[], int n){ // Uisng Brute force
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(i != j && arr[i] != INT8_MIN){
//                 if(arr[i] == arr[j]){
//                 arr[i] = INT8_MIN;
//                 arr[j]= INT8_MIN;
//                 }
//             }   
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] != INT8_MIN){
//             cout << arr[i] << " ";
//         }
//     }
// }
void uniqueValNew(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j]){
                arr[i] = INT8_MIN;
                arr[j] = INT8_MIN;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != INT8_MIN){
            cout << arr[i] << " ";
        }
    }
    
}
int main(){
    int arr[] = {1098, 2, 5, 7, 9, 7, 6, 5, 6, 1098, 7929};
    int n = sizeof(arr)/sizeof(int);
    // uniqueVal(arr, n);
    uniqueValNew(arr, n);
}