#include<iostream>
using namespace std;

class base1{
    protected:
        void greet(){
            cout<<"Greeting form base1"<<endl;
        }
};

class base2{
    protected:
        void greet(){
            cout<<"Greetings froom base class 2"<<endl;
        }
};

class derive : public base1, public base2{
    public:
        void greet(){
            base1 :: greet(); //ambigous resolve krar way...
        }
};

int main()
{   
    /*
        Okay fojle aage ambigous er mane ta bujh. ambigous hoitehce ekta conflict er moto. jemon ta upore hoiche. derive calss
        base 1 ar base er subclass; toh base1 class e o greet() function ache abar base2 teo greet() funviton ache ekhon tui
        derived class theke jodi greet() call dech taile kon greet re call korbo? ekta confution na. ar etai hoitache "ambigous"

        eta solve korte hole toke derived class e bole dite hoibo je tui kon greet() funvtion ta invoke korte chaitehcos. jemon:
        void greet(){
            base1 :: greet();
        }
    */
    derive d;
    d.greet();
    return 0;
}