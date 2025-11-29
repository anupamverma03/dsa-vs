#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // char str[] = {'a', 'b', 'c'}; // gives garbage value after abc due to not getting the ending character /0
    char str[] = {'a', 'b', 'c', '\0'}; // gives string output abc
    int n = strlen(str); // size of string
    cout << str << endl;
    cout << n;
}