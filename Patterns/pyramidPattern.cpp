#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n-i+1;j++)
        {
            cout << "  ";
        }
        for (int k = 1; k < i+1; k++)
        {
            cout << k << " ";
        }
        for (int l = 1; l < i; l++)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    
}