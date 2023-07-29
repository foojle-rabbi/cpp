#include<iostream>
#include<iomanip> //for using manipulators

using namespace std;

int main()
{
    int a = 5;

    cout<<"The value of a is : "<<a<<endl;
    a = 53; //the value of "a" can be changed in anywhere
    cout<<"The value of a after new assign is : "<<a<<endl;

    //contstants in c++
    const int b = 56;
    cout<<"The value of const b is : "<<b<<endl;
    // b = 53; //it will show error cause consts value cannot be change if once declared;

    //manipulators in c++
    // 1. endl 2. setw(4)
    int x, y, z;
    x = 5, y = 32, z = 3245;

    cout<<"The value of x without setw is : "<<x<<endl;
    cout<<"The value of y without setw is : "<<y<<endl;
    cout<<"The value of z without setw is : "<<z<<endl<<endl;

    cout<<"The value of x with setw is: "<<setw(4)<<x<<endl;
    cout<<"The value of y with setw is: "<<setw(4)<<y<<endl;
    cout<<"The value of z with setw is: "<<setw(4)<<z<<endl;
    
    //operator presedence
    //for more information please visit "cppreference.com" and besides you know this, don't you?
    
    return 0;
}

