// C++ program to show unary operator overloading
#include <iostream>
using namespace std;

class Distance {
    int feet, inch;
public:
    Distance() {}
    Distance(int f, int i) { feet = f; inch = i; }
    void operator - () {
        feet--;
        inch--;
        cout << "Feet & Inch(Decrement): " << feet << " feet " << inch << " inch" << endl;
    }
};

int main() {
    Distance d1(18, 9);
    -d1;
    return 0;
}

//output:

// Feet & Inch(Decrement): 17 feet 8 inch