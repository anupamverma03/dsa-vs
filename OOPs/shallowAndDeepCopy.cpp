#include <iostream>
using namespace std;

class Students{
public:
    string name;
    string dept;
    int* semPtr;
    int id;

    //constructor
    Students(string name, string dept, int sem, int id){
        this-> name = name;
        this-> dept = dept;
        semPtr = new int;
        *semPtr = sem;
        this-> id = id;
    }

    //deep copy constructor
    Students(Students &orgObj){
        this-> name = orgObj.name;
        this-> dept = orgObj.dept;
        semPtr = new int;
        *semPtr = *orgObj.semPtr;
        this-> id = orgObj.id;
    }

    //getter
    void getInfo(){
        cout << name << endl;
        cout << dept<< endl;
        cout << *semPtr << endl;
        cout << id << endl;
    }

};

int main(){
    Students s1("Anupam", "ECE", 4, 31473);
    s1.getInfo();
    Students s2(s1);
    s2.name = "Prachi";
    *(s2.semPtr) = 1;
    s1.getInfo();
    s2.getInfo();
}