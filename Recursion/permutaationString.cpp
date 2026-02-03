#include <iostream>
using namespace std;

void pString(string p, string up){
    if(up.length() == 0){
        cout << p << endl;
        return;
    }

    char ch = up[0];

    for(int i = 0; i <= p.length(); i ++){
        string f = p.substr(0, i);
        string s = p.substr(i, p.length());
        pString(f+ch+s, up.substr(1));
    }
}

int main(){
    string str = "abc";
    pString("", "abc");
}