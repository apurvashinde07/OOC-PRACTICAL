#include<iostream>
using namespace std;

class complex {
public:
    int real, imag;

    complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    friend ostream &operator<<(ostream &out, const complex &c);
    friend istream &operator>>(istream &in, complex &c);
};

ostream &operator<<(ostream &out, const complex &c) {
    out << c.real << " + i" << c.imag << endl;
    return out;
}

istream &operator>>(istream &in, complex &c) {
    cout << "Enter Real Part: ";
    in >> c.real;
    cout << "Enter Imaginary Part: ";
    in >> c.imag;
    return in;
}

int main() {
    
    cout<<"Name : Apurva Shinde"<<endl;
    cout<<"class : SY-B"<<endl;
    cout<<"Batch : B3"<<endl;
    cout<<"Roll No. : 85"<<endl;
    
    complex c1;
    cin >> c1;
    cout << "The complex object is: ";
    cout << c1;
    return 0;
}


// output:

// Enter Real Part: 5
// Enter Imaginary Part: 7

// The complex object is: 5 + i7
