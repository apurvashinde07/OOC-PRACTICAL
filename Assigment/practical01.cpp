#include<iostream>
using namespace std;
class student{
    private:
    char name[30];
    int rollno;
    float marks;
    public:
    void inputdetails(){
        cout<<"Enter Student name: ";
        cin>>name;
        cout<<"enter roll number: ";
        cin>>rollno;
        cout<<"Enter marks: ";
        cin>>marks;
    }

    void displaydetails(){
        cout<<"student name: "<<name<<endl;
        cout<<"roll number: "<<rollno<<endl;
        cout<<"marks: "<<marks<<endl;
    }

};
int main(){
    
    cout<<"Name : Apurva Shinde"<<endl;
    cout<<"class : SY-B"<<endl;
    cout<<"Batch : B3"<<endl;
    cout<<"Roll No. : 85"<<endl;
    
    student studentObj;
    studentObj.inputdetails();
    cout<<"\n student Details: \n";
    studentObj.displaydetails();
    return 0;
}


//output

// Enter Student name: Apurva
// enter roll number: 85
// Enter marks: 89

//  student Details: 
// student name: Apurva
// roll number: 85

// marks: 89
