#include <iostream>
using namespace std;

void pattern(int r, int c=0){
    if(r==0){
      return;
    }
    if(c<r){
        pattern(r, c+1);
        cout << "* ";
    } else{
        pattern(r-1, 0);
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter a no.: ";
    cin >> n;
    pattern(n);
}