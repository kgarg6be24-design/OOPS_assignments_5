/*
Name: Krish Garg
Roll No: 1024150236

Q3. Demonstrate public, protected and private inheritance.
*/

#include <iostream>
using namespace std;

class Base {
public:
    int a = 5;
};

class PublicD : public Base {};
class ProtectedD : protected Base {};
class PrivateD : private Base {};

int main() {
    PublicD p;
    cout << p.a << endl;
    return 0;
}
