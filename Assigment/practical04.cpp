#include<iostream>
using namespace std;
  class Rectangle{
private:
  double length;
  double width;
public:
  Rectangle():length(1.0), width(1.0){}
  Rectangle(double len,double wid):length(len),width(wid){}
  ~Rectangle(){
      cout<<"Rectangle object destroyed."<<endl;
  }
  double getlength()const{
    return length;
  }
  double getwidth(){
    return width;
  }
  void setlength(double len){
    length=len;
  }
  void setwidth(double wid){
    width=wid;
  }
  double calculateArea()const{
    return length*width;
  }
  double calculatePerimeter()const{
    return 2*(length+width);
  }
  };
  int main(){

    cout<<"Name : Apurva Shinde"<<endl;
    cout<<"class : SY-B"<<endl;
    cout<<"Batch : B3"<<endl;
    cout<<"Roll No. : 85"<<endl;
    
    Rectangle rect(4.0,40.0);
    cout<<"Rectangle Properties: "<<endl;
    cout<<"Length: "<<rect.getlength()<<endl;
    cout<<"Width: "<<rect.getwidth()<<endl;
    cout<<"Area: "<<rect.calculateArea()<<endl;
    cout<<"Perimeter: "<<rect.calculatePerimeter()<<endl;

    return 0;
  }

//output:

// Rectangle Properties: 
// Length: 4
// Width: 40
// Area: 160
// Perimeter: 88

// Rectangle object destroyed.
