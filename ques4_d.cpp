/*
Name: Krish Garg
Roll No: 1024150236

Q4(d). Write a C++ program to demonstrate Hierarchical Inheritance.
*/

#include <iostream>
using namespace std;

class Person {
public:
    void identity() {
        cout << "I am a person" << endl;
    }
};

class Student : public Person {
public:
    void role() {
        cout << "I am a student" << endl;
    }
};

class Teacher : public Person {
public:
    void role() {
        cout << "I am a teacher" << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.identity();
    s.role();

    t.identity();
    t.role();

    return 0;
}
