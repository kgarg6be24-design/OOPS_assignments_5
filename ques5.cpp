/*
Name: Krish Garg
Roll No: 1024150236

Q5. Demonstrate constructors and destructors in inheritance.
*/

#include <iostream>
using namespace std;

class Parent {
public:
    Parent() { cout << "Parent Constructor" << endl; }
    ~Parent() { cout << "Parent Destructor" << endl; }
};

class Child : public Parent {
public:
    Child() { cout << "Child Constructor" << endl; }
    ~Child() { cout << "Child Destructor" << endl; }
};

int main() {
    Child c;
    return 0;
}
