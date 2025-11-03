#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle\n";
    }
};

class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle\n";
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This vehicle is a car\n";
    }
};

class Bus : public Vehicle, public Fare {
public:
    Bus() {
        cout << "This vehicle is a Bus with fare\n";
    }
};

int main() {
    cout<<"Name : Apurva Shinde"<<endl;
    cout<<"class : SY-B"<<endl;
    cout<<"Batch : B3"<<endl;
    cout<<"Roll No. : 85"<<endl;
    cout<<endl;
    // creating object of subclass will invoke the constructor of base class
    Bus obj2;
    return 0;
}

//output
// This is a vehicle
// Fare of Vehicle
// This vehicle is a Bus with fare
