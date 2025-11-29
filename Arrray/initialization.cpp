#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> vec; //declaration

    vector<int> vecNew(8,0); // declaration and initialization with all val = 0

    vec = {2, 5 ,6, 9}; // initialization

    for(int i : vec){
        cout << i << endl; // taking output from a vector
    }

    for(int i : vecNew){
        cout << i << endl; // taking output form vecNew
    }
}