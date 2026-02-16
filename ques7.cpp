/*
Name: Krish Garg
Roll No: 1024150236

Q7. Multiple inheritance for car dashboard.
*/

#include <iostream>
using namespace std;

class Speed {
protected:
    int speed = 70;
};

class Fuel {
protected:
    int fuel = 50;
};

class Temp {
protected:
    int temp = 35;
};

class Dashboard : public Speed, public Fuel, public Temp {
public:
    void show() {
        cout << speed << " " << fuel << " " << temp << endl;
    }
};

int main() {
    Dashboard d;
    d.show();
    return 0;
}
