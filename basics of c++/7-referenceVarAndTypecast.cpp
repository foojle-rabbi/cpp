#include<iostream>

using namespace std;

int c = 53; //global variables

int main()
{
    //build in data types
    int a = 5;
    int b = 9;
    int c = a + b;

    cout<<"The sum of a and b is : "<<c<<endl; //this wil print the local variable data
    cout<<"The value of c using(::) is : "<<::c<<endl; 
    cout<<"The value of c without(::)"<<c<<endl;
    //this is called the "::" resulation operator, which will print the golbal variable value instead of local variable value


    //float double and long double "litterals"

    float d = 34.5; //here i initialize or declared float but it will take it as "double"
    long double e = 34.5; //this is also double

    d = 34.5f; //now this will behave like a floating number because of "f" which is called litteral i thingk
    e = 34.5l; //for wriing "l" it will make this long double;

    d = 34.5F; //both are same "L and l" or "f and F"
    e = 34.5L;

    //lets see how much by each one tooks
    cout<<endl<<"The size of 34.5 is : "<<sizeof(34.5)<<endl;
    cout<<"The size of 34.5f is: "<<sizeof(34.5f)<<endl;
    cout<<"The size of 34.5F is: "<<sizeof(34.F)<<endl;
    cout<<"The size of 34.5l is: "<<sizeof(34.5l)<<endl;
    cout<<"The sizeof 34.5L is: "<<sizeof(34.5L)<<endl;
    cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;


    // *******reference Variable *********
    //suppose "shohan" we call him "shoon" his friend at school call him "rifat"
    int x = 345;
    int &y = x; // "&" means reference
    cout<<x<<endl;
    cout<<y<<endl;


    //******typecasting*******
    int z = 56;
    int xy = 3.45;
    cout<<"The value of z is: "<<(float)z<<endl;
    cout<<"The value of xy (after type casting in int) "<<(int)xy<<endl; //typecasted float into int
    cout<<"The value of xy (after type casting in int) "<<int(xy)<<endl; //typecasted float into int

    
    return 0;
}