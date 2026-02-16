/*
Name: Krish Garg
Roll No: 1024150236

Q4(c). Multilevel inheritance.
*/

#include <iostream>
using namespace std;

class A {
public:
    void f1() { cout << "A" << endl; }
};

class B : public A {};
class C : public B {};

int main() {
    C obj;
    obj.f1();
    return 0;
}
