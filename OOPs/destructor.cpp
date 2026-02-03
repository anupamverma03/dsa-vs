#include <iostream>
using namespace std;

class Students{
public:
    string name;
    string dept;
    int sem;
    int* idPtr;

    //constructor
    Students(string name, string dept, int sem, int id){
        this-> name = name;
        this-> dept = dept;
        this-> sem = sem;
        idPtr = new int;
        *idPtr = id;
    }

    //destructor
    ~Students(){
        cout << "Deletes object";
        delete idPtr;
    }

    //getter
    void getInfo(){
        cout << name << endl;
        cout << dept << endl;
        cout << sem << endl;
        cout << *idPtr << endl;
    }
};

int main(){
    Students s1("Rohan", "CSE", 7, 4321);
    s1.getInfo();
}