// Print all combinations of outcomes of a dice having sum equals target.
#include <iostream>
using namespace std;

void getComb(string p, int tar){ //uses processed and unprocessed string pattern
    if(tar == 0){
        cout << p << endl;
        return;
    }
    for(int i = 1; i <= 6; i++){
        char ch = i + '0';
        if(i <= tar){ //any number added to p should be less than current target
            getComb(p+ch, tar - i);
        }
    }
}

int main(){
    int tar = 4;
    getComb("", tar);
}