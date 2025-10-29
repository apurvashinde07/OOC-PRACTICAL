#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
    int s, l, b;
    float r,bs,ht;
    cout<<"enter side of a square: ";
    cin>>s;
    cout<<"enter the length & breadth og rectangle: ";
    cin>>l>>b;
    cout<<"enter radius of circle: ";
    cin>>r;
    cout<<"enter base & heigth of rectangle: ";
    cin>>bs>>ht;
    cout<<"Area of a square is: "<<area(s);
    cout<<"Area of rectangle: "<<area(l,b);
    cout<<"\n Area of circle is: "<<area(r);
    cout<<"\n area of triangle is: "<<area(bs,ht);
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14* r * r);
}
float area(float bs,float ht)
{
    return((bs*ht)/2);
}

//output:
// enter side of a square: 2
// enter the length & breadth og rectangle: 2 3
// enter radius of circle: 3
// enter base & heigth of rectangle: 4 2
// Area of a square is: 4Area of rectangle: 6
//  Area of circle is: 28.26
//  area of triangle is: 4