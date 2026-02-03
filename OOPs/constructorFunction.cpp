#include <iostream>
#include <string>
using namespace std;
class Teacher{
public:
    //Non - parameterised
    Teacher(){ // manually calling a constructor to assigning some properties at once for all objects in the class
        dept = "Electrnics and Communications";
    }
    //paramterised
    Teacher(string name, string d, string s, double sal){// initilizing all attributes simultaneously
        this->name = name; //this pointer is used to specify the varibale of the object
        dept = d;
        subject = s;
        salary = sal;
    }
    //copy constructor
    Teacher(Teacher &orgObj){//orgObj is just paramter name for an object inside Teacher
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
    string name;
    string dept;
    string subject;
    double salary;

};
int main(){
    // Teacher t1; // constructor gets called on obect declataion automatically
    // t1.name = "KM Bhurchandi";
    Teacher t1("KM Bhurchandi", "EC", "Signal Processing", 160000.00); // declarayion and initialization
    cout << t1.name << endl;
    cout << t1.dept << endl;;
    Teacher t2(t1); // custom copy constructor is called if declared
    cout << t2.name << endl;
    cout << t2.dept;
    return 0;
}