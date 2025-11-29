#include <iostream>
using namespace std;
void printNto1(int n){ // recursive function
    if(n==1){      // base case
        cout << 1;
        return;
    }
    cout << n << endl; // work
    printNto1(n-1); // function call for next value
}

int main(){
    int n;
    cout << "Enter a num: ";
    cin >> n;
    printNto1(n);
}