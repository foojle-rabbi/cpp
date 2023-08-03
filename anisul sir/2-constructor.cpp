#include<iostream>
using namespace std;

class student{
    int id;
    float gpa;
    public:
        student(int x, float y){   //constructor is a special types of function that is used to set value of the class var.
            id = x;
            gpa = y;
        }

        void printValue(){
            cout<<"The id : "<<id<<endl;
            cout<<"The gpa: "<<gpa<<endl;
        }
};

int main(){
    student mina(5, 4.22);
    mina.printValue();

    return 0;
}