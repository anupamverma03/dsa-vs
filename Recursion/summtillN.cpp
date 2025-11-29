#include <iostream>
using namespace std;

int sumTillN(int n){
    if(n == 1) return 1;
    return n + sumTillN(n-1);
}

int main(){
    int n;
    cout << "Enter a num: ";
    cin >> n;
    cout << sumTillN(n);
}  