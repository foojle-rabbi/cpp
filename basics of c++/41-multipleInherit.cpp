#include<iostream>
using namespace std;

class base1{
    public:
        int baseValue1;
};

class base2{
    public:
        int baseValue2;
};

class derived : public base1, public base2{ //multiple inherit syntax
    public:
        void setValue(int x, int y){
            baseValue1 = x;
            baseValue2 = y; 
        }

        void result(void){
            cout<<"The sum of base 1 and base 2 is: "<<baseValue1 + baseValue2<<endl;
        }
};

int main()
{
    derived d;
    d.setValue(22, 58);
    d.result();
    return 0;
}