#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> vec = {1,5,7,9}; //initialization

    vec.push_back(8); // adding an element

    cout << vec.size() << endl; // print size
    cout << vec.capacity(); // print capacity of vector
}