#include<iostream>
using namespace std;

class student{
private:
    int age; 

public: 
    int roll;
    string name;
    string cls;

    void print(){
        cout << endl << "[ name : " << name << ", class: " << cls << " , roll: " << roll << " ]" << endl << endl;
    }

    //constructor
    student(string name, int age){
        this -> name = name;
        this -> age = age;
    }

    // default construcotr
    student(){

    }

};

int main()
{
    student s;
    s.name = "Fojle";
    s.cls = "xi";
    s.roll = 1152;

    s.print();

    student *s2 = new student;
    s2->cls = "x";
    s2->name = "Isman";
    s2->roll = 1151;

    s2->print();

    student s3(s);
    s3.print();

    student quddus("Salam", 5);
    quddus.print();

    quddus = s;
    s.name[0] = 'G';
    quddus.print();
    return 0;
}