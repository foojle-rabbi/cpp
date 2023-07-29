#include<iostream>
using namespace std;

int main()
{
    //pointeer is a data types which hold the address of other data types
    int a = 5;
    int *p = &a; //in the "p" pointer the addresh of "a" in the memory will be assigned
    // "&" means address of
    // "*" menas value of 

    cout<<"the address of a is : "<<&a<<endl; //both are same
    cout<<"the address of a is : "<<p<<endl;

    cout<<"The value of a is: "<<a<<endl;   //both are same
    cout<<"the value of a is (using pointer): "<<*p<<endl;

    //pointer ot pointeer
    int **x = &p;
    
    cout<<"The address of p pointer "<<x<<endl;
    cout<<"the value of x pointer is: "<<*x<<endl;
    cout<<"the value of **x pointer is : "<<**x<<endl;
    return 0;
}