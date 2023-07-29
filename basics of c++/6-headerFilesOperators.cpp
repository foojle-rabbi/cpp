#include<iostream>
//there are two types of header files
// 1. system header file: it comes from with the compiler 
// 2. user define header file: it is written by programmer

// #include "this.h" this will show error if there is no such file in the curent directory

//cpp reference website for referrence

using namespace std;

int main()
{   
    int a = 4;
    int b = 5;
    cout<<"opperators in c"<<endl;
    cout<<"Following are the types of operators: "<<endl;

    //arithmetic operator:
    cout<<"The value of a + b = "<<a + b<<endl;
    cout<<"The value of a - b = "<<a - b << endl;
    cout<<"The value of a * b = "<<a * b << endl;
    cout<<"The value of a / b = "<<a / b << endl;
    cout<<"The value of a % b = "<<a % b << endl;
    cout<<"The value of a++" << a++ << endl;
    cout<<"The value of a--" <<a-- <<endl;
    cout<<"The value of ++a" <<++a <<endl;
    cout<<"the value of --a = " <<--a <<endl;

    //assignment operator
    int c = a;
    int d = b;

    //comparison operator
    /*
    == equal equal to
    != not equal to
    > less then
    < greater than
    >= less thn equal
    >= greater than equal
    */

   cout<<"Logical operaotr: "<<endl;
   /*
   && and operator
   || or operator
   */

   cout<<"Bitwise operator: "<<endl;
   /*
   ^^ xor 
   | bitwise or
   & bitwise and
   */
    return 0;
}