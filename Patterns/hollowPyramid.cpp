#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "ENter a number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n-i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int k = 0; k < 2*i-1; k++)
        {
            if(i>0){
                cout << " ";
            }
        }
        if(i>0){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if(i<n-2){
           
        for (int k = 0; k < 2*(n-i)-5; k++)
        {
            cout << " ";
        }
        cout << "*";
        }
        cout << endl;
    }
    
}