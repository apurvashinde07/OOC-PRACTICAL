// C++ program to show binary operator overloading
#include <iostream>
using namespace std;

class Distance {
    int feet, inch;
public:
    Distance() {}
    Distance(int f, int i) { feet = f; inch = i; }
    Distance operator + (Distance d2);
    void display() {
        cout << feet << " Feet & " << inch << " Inch" << endl;
    }
};

Distance Distance::operator+(Distance d2) {
    Distance d3;
    d3.feet = feet + d2.feet;
    d3.inch = inch + d2.inch;
    return d3;
}

int main() {
    
    cout<<"Name : Apurva Shinde"<<endl;
    cout<<"class : SY-B"<<endl;
    cout<<"Batch : B3"<<endl;
    cout<<"Roll No. : 85"<<endl;
    
    Distance d1(18, 9);
    Distance d2(12, 4);
    Distance d3;
    d3 = d1 + d2;
    cout << "After overloaded operator" << endl;
    d3.display();
    return 0;
}

//output:

// After overloaded operator

// 30 Feet & 13 Inch
