#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person's constructor called"<<endl;
    }
};

class Faculty : public Person {
public:
    Faculty() {
        cout << "Faculty's constructor called"<<endl;
    }
};

class Student : public Person {
public:
    Student() {
        cout << "Student's constructor called"<<endl;
    }
};

// TA inherits from both Faculty and Student
class TA : public Faculty, public Student {
public:
    TA() {
        cout << "TA's constructor called";
    }
};

int main() {
    TA obj;
    return 0;
}

//output:

// Person's constructor called
// Faculty's constructor called
// Person's constructor called
// Student's constructor called
// TA's constructor called