/*
Name: Krish Garg
Roll No: 1024150236

Q2. Demonstrate use of protected access specifier.
*/

#include <iostream>
using namespace std;

class Number {
protected:
    int x;
public:
    Number() { x = 20; }
};

class Square : public Number {
public:
    void show() { cout << x * x << endl; }
};

int main() {
    Square s;
    s.show();
    return 0;
}
