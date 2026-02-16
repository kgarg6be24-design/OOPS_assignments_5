/*
Name: Krish Garg
Roll No: 1024150236

Q4(a). Single inheritance.
*/

#include <iostream>
using namespace std;

class A {
public:
    void showA() { cout << "A" << endl; }
};

class B : public A {};

int main() {
    B obj;
    obj.showA();
    return 0;
}
