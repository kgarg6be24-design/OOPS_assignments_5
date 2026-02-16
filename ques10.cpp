/*
Name: Krish Garg
Roll No: 1024150236

Q10. Hybrid inheritance using Person, Staff, Student and TeachingAssistant.
*/

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) { name = n; }
};

class Staff : virtual public Person {
protected:
    int emp_id;
public:
    Staff(string n, int e) : Person(n) { emp_id = e; }
};

class Student : virtual public Person {
protected:
    int stu_id;
public:
    Student(string n, int s) : Person(n) { stu_id = s; }
};

class TeachingAssistant : public Staff, public Student {
public:
    TeachingAssistant(string n, int e, int s)
        : Person(n), Staff(n, e), Student(n, s) {}
};

int main() {
    TeachingAssistant ta("Aman", 101, 202);
    return 0;
}
