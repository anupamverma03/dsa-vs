#include <iostream>
using namespace std;

string removeLetter(string& str, string ans, int i){
    if(i == str.length()){
        return ans;
    }
    if(str.substr(i, 5) == "apple"){
        return removeLetter(str, ans, i+5);
    } else{
        ans.push_back(str[i]);
        return removeLetter(str, ans, i+1);
    }
}

int main(){
    string str = "ifapple";
    cout << removeLetter(str, "", 0);
}