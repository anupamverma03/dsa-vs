#include <iostream>
using namespace std;
int fact(int n){
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        val *= i;
    }
    return val;
}
int main (){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "factorial is: " << fact(n);
}