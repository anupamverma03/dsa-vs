#include <iostream>
using namespace std;
void intsArr(int arr1[], int n, int arr2[], int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
            }
        }
        
    }
    
}
int main(){
    int arr1[] = {1, 68, 56, 34, 6, 8, 9, 0};
    int arr2[] = {1, 56, 7, 4, 67, 4, 9, 567, 48};
    int n = sizeof(arr1)/sizeof(int);
    int m = sizeof(arr2)/sizeof(int);
    intsArr(arr1, n , arr2, m);
}