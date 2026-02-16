/*
Name: Krish Garg
Roll No: 1024150236

Q4(e). Write a C++ program to demonstrate Hybrid Inheritance.
*/

#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "Person class" << endl;
    }
};

class Staff : virtual public Person {
public:
    void staffInfo() {
        cout << "Staff class" << endl;
    }
};

class Student : virtual public Person {
public:
    void studentInfo() {
        cout << "Student class" << endl;
    }
};

class TeachingAssistant : public Staff, public Student {
public:
    void taInfo() {
        cout << "Teaching Assistant class" << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.show();
    ta.staffInfo();
    ta.studentInfo();
    ta.taInfo();
    return 0;
}
