#include <iostream>   // Include necessary header for input/output stream
#include <cmath>      // Include necessary header for mathematical functions
using namespace std;

const double PI = 3.14159;  // Define constant value for PI

// Base class
class Shape {
public:
    // Pure virtual functions
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;  // Private member variable to store radius
public:
    // Constructor
    Circle(double rad) : radius(rad) {}

    // Override area function
    double calculateArea() const override {
        return PI * pow(radius, 2);  // Area = πr²
    }

    // Override perimeter function
    double calculatePerimeter() const override {
        return 2 * PI * radius;  // Perimeter = 2πr
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    // Constructor
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Override area function
    double calculateArea() const override {
        return length * width;  // Area = l × w
    }

    // Override perimeter function
    double calculatePerimeter() const override {
        return 2 * (length + width);  // Perimeter = 2(l + w)
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    // Constructor
    Triangle(double s1, double s2, double s3)
        : side1(s1), side2(s2), side3(s3) {}

    // Override area function using Heron's formula
    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2;  // Semi-perimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Override perimeter function
    double calculatePerimeter() const override {
        return side1 + side2 + side3;  // Perimeter = sum of sides
    }
};

// Main function
int main() {

    cout<<"Name : Apurva Shinde"<<endl;
    cout<<"class : SY-B"<<endl;
    cout<<"Batch : B3"<<endl;
    cout<<"Roll No. : 85"<<endl;
    
    // Create objects of different shapes
    Circle circle(7.0);
    Rectangle rectangle(4.2, 8.0);
    Triangle triangle(4.0, 4.0, 3.2);

    // Display results
    cout << "Circle:" << endl;
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Perimeter: " << circle.calculatePerimeter() << endl;

    cout << "\nRectangle:" << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

    cout << "\nTriangle:" << endl;
    cout << "Area: " << triangle.calculateArea() << endl;
    cout << "Perimeter: " << triangle.calculatePerimeter() << endl;

    return 0;
}


// output:

// Circle:
// Area: 153.938
// Perimeter: 43.9823

// Rectangle:
// Area: 33.6
// Perimeter: 24.4

// Triangle:
// Area: 5.8657
// Perimeter: 11.2

