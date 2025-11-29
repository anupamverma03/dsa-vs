#include <iostream>
#include <string>
using namespace std;
class MathWorksTeams{ // declaration of class
    public:
    string name;
    int size;
    string leaderName;

    //functions or methods
    void changeSize(int num){
        size = size+num;
    }
    //getter function
    void getFunc(){
        cout<< name << endl;
        cout << size << endl;
    }
};
int main(){
    MathWorksTeams t1;
    t1.name = "MATLAB";
    t1.size = 58;
    t1.leaderName = "Manoj Kumar";
    t1.getFunc();
    t1.changeSize(2);
    t1.getFunc();

}