#include <iostream>
#include <string>
using namespace std;
class teacher{ //declaration of class
    public: // access modifier
    //properties or attributes
    string name;
    string dept;
    string subject;
private:
    double salary;

    //methods or member functions
public:
    void changeDept(string newDept){
        dept = newDept;
    }
    void setSalary(float s){
        salary = s; // setter function
    }
    void getSalary(){ //getter function
        cout << salary;
    }
};
int main(){
    teacher t1; //declaration of object in a class;
    t1.name = "KM Bhurchandi";
    //t1.salary = 150000.00;
    t1.setSalary(190000);

    cout << t1.name<< endl;
    //cout << t1.salary;
    t1.getSalary();
    return 0;
}