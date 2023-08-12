#include<iostream>
using namespace std;

class circle2;

class circle{
    int r;
    float pi;
public:
    circle(void);
    int area(int r){
        return (pi * r * r);
    }

    circle(){
        pi = 3.1416;
    }

    friend class circle2;
};

class circle2{
    int r;
public:
    int area2(int r){
        circle object;
        return (object.pi * r * r); //Remember to solve this problem. kire vai ami toh ei problem ta solve korchi ar niche
        // tar explanation o dihi; its means the problem had been solved;
    }
    
    /* 
        the problem is, to use friend class object you need declare a object of that class. and then access the member using
        that object. jemon ta ekhane hoiche. prothom prothom ami pi re object chara use korte gechi. tai etodin etto error 
        dekahiche. kintu jokhon ami circle er ekata object create korchi. tarpor oi "pi" re use korchi tokhon kono somossa 
        hoy nai.
    */
};

int main()
{

    
    return 0;
}