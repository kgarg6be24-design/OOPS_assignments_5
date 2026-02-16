/*
Name: Krish Garg
Roll No: 1024150236

Q1. Write a simple base class and a derived class to illustrate inheritance.
*/

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating" << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking" << endl; }
};

int main() {
    Animal a;
    Dog d;
    a.eat();
    d.eat();
    d.bark();
    return 0;
}
