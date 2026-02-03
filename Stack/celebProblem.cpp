#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    vector<vector<int>> mat = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    
    //find celeb
    stack<int> s;
    for(int i = 0; i < mat.size(); i++){
        s.push(i);
    }
    while(s.size() > 1){
        int i = s.top(); s.pop();
        int j = s.top(); s.pop();
        
        if(mat[i][j] == 1){
            s.push(j);
        } else{
            s.push(i);
        }
    }
    int celeb = s.top();

    for(int i = 0; i < mat.size(); i++){
        if(i != celeb && (mat[i][celeb] == 0 || mat[celeb][i] == 1)){
            return -1;
        }
    }
    cout << "Celebrity is: " << celeb << endl;
}