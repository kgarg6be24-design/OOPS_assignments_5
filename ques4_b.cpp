/*
Name: Krish Garg
Roll No: 1024150236

Q4(b). Multiple inheritance.
*/

#include <iostream>
using namespace std;

class X {
public:
    void fx() { cout << "X" << endl; }
};

class Y {
public:
    void fy() { cout << "Y" << endl; }
};

class Z : public X, public Y {};

int main() {
    Z obj;
    obj.fx();
    obj.fy();
    return 0;
}
