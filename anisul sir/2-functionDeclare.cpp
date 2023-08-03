#include<iostream>
using namespace std;

class student{
    int id; 
    double gpa;
    public : 
        
        void setValue(int x, double y){
            id = x;
            gpa = y;
        }
        void printValue(void){
            cout<<"Id is : "<<id<<" | Gpa is : "<<gpa<<endl;
        }
};

int main()
{
    student jannat;
    jannat.setValue(513, 3.44);
    jannat.printValue();

    student salma;
    salma.setValue(514, 4.00);
    salma.printValue();
    return 0;
}