/*
    in simple word encapsulation means data hiding;
*/
#include<iostream>
using namespace std;

class person{
    private:
        string name;
        int age;
    public:
        int favDigit;
        void display(void){
            //here i can use the the name age, and favdigit;
        }
};

int main()
{
   // but from here i only could use the public variabe which is favDigit;
    person p;
    p.favDigit = 3;
    //p.name = "islam"; // i cant use this cause name is private/ the name varibale can use only the memeber funciton of the class;
    return 0;
}