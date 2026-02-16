/*
Name: Krish Garg
Roll No: 1024150236

Q8. Hierarchical inheritance in library system.
*/

#include <iostream>
using namespace std;

class User {
protected:
    int id;
public:
    User(int i) { id = i; }
};

class Student : public User {
public:
    Student(int i) : User(i) {}
};

class Teacher : public User {
public:
    Teacher(int i) : User(i) {}
};

int main() {
    Student s(1);
    Teacher t(2);
    return 0;
}
