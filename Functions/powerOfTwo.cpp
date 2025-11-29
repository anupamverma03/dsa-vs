#include <iostream>
using namespace std;
void powOf2(int n){
    if(n>0 && (n & (n-1)) == 0){
        cout << "Number is in power of 2";
    }else{
        cout << "Number is not in power of 2";
    }
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    powOf2(n);
}