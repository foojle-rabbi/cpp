#include <iostream>
using namespace std;

class student{
    public :
       int id;
       float gpa;
};

int main()
{
    /*
        there are some topics on oops like: 
        1. class
        2. object
        3. inheritence
        4. Encapsulation
        5. polymorphism
        6. abstruction
    */
    student jannat, salma;
    jannat.id = 512;
    jannat.gpa = 3.44;
    cout<<"Id : "<<jannat.id<<" | "<<jannat.gpa<<endl;

    salma.id = 513;
    salma.gpa = 3.12;
    cout<<"Id : "<<salma.id<<" | "<<salma.gpa<<endl;

    return 0;
}