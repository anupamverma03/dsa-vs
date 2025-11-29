#include <iostream>
#include <string>
using namespace std;
class Person{
public:
    string name;
    int age;

    //setter
    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }
};

class Student : public Person{
public:
    int rollNum;
};
int main(){
Student s1;
s1.name = "Anupam";
s1.rollNum = 4;
cout << s1.name << endl;
cout << s1.rollNum;
}