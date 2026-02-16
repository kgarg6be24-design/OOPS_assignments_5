/*
Name: Krish Garg
Roll No: 1024150236

Q9. Multilevel inheritance in vehicle system.
*/

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) { brand = b; }
};

class Truck : public Vehicle {
protected:
    int load;
public:
    Truck(string b, int l) : Vehicle(b) { load = l; }
};

class RefrigeratedTruck : public Truck {
public:
    RefrigeratedTruck(string b, int l) : Truck(b, l) {}
};

int main() {
    RefrigeratedTruck r("Tata", 5000);
    return 0;
}
