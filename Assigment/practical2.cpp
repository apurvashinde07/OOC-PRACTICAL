#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int imaginary;
    complex(){
        real=0;
        imaginary=0;
    }
    complex(int r, int i)
    {
        real=r;
        imaginary=i;
    }
    complex addComplexNumber(complex c1, complex c2){
        complex result;
        result.real=c1.real+c2.real;
        result.imaginary=c1.imaginary+c2.imaginary;
        return result;
    }
};
int main(){
    complex c1(4, 5);
    cout<<"Complex Number 1: "<<c1.real<<"+i"<<c1.imaginary<<endl;
    complex c2(8, 9);
    cout<<"Complex Number 2: "<<c2.real<<"+i"<<c2.imaginary<<endl;
    complex c3;
    c3=c3.addComplexNumber(c1, c2);
    cout<<"Sum of complex number: "<<c3.real<<"+i"<<c3.imaginary;
    cout<<endl;

    complex A(2, 7);
    cout<<"Complex number 1: "<<A.real<<"+i"<<A.imaginary<<endl;
    complex B(10, 6);
    cout<<"Complex Number 2: "<<B.real<<"+i"<<B.imaginary<<endl;
    complex C;
    C=C.addComplexNumber(A, B);
    cout<<"Sum of complex number: "<<C.real<<"+i"<<C.imaginary;   
    return 0;
}


//output: 

// Complex Number 1: 4+i5
// Complex Number 2: 8+i9
// Sum of complex number: 12+i14
// Complex number 1: 2+i7
// Complex Number 2: 10+i6
// Sum of complex number: 12+i13