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
        return (pi * r * r); //Remember to solve this problem
    }
};

int main()
{

    
    return 0;
}