#include<iostream>
using namespace std;

class person{
    public:
        virtual void sendMessage() = 0; // this is called pure abstruct function
        void call(){
            cout<<"this is call function"<<endl;
        }
};

class rahim : public person{
    public:
        void sendMessage(){
            cout << "hi i am Rahim"<<endl;
        }
};

class karim : public person{
    public:
        // void call(){
        //     cout << "hello i am call funciton"<<endl; ami chaileo ekhane nijer iccha moto funciton create korte parbo na.
        // }
        void sendMessage(){
            cout<<"Hello i am karim"<<endl;
        }
};

int main()
{
    /*
        what is abstruction?
        *abstruction is the process of hiding the implemention details and showing only the funtionality to the user.

        Jodi kono function pure virtual function "(virtual void sendMessage() = 0;)" use kora hoy tokhon take mane
        oi class ke "abstruct class" bole.

        properties of abstruction function:
            1. Object can't be created.
            2. we can create pointer and reference of base abstruct class point.
            3. It can have constructor.
            4. there can be non virtual funciton.

        wait, kew jodi abstruct class (abstruct class hochhe oi class je class e pure abstruct funciton thake) ke inherit
        kore tahole oi function ke "abstruct funciton" use korte hobe.
                                
    */

    //person p; // ei je ami chaileo abstruct class er object create korte parbo na. !! ha tobe chaile pointer create korte parbo
    person *ptr;
    rahim r;
    karim k; //ami jodi virtual function use na kori tahole ami karim class er kono object create kote parbo na.

    ptr = &r;
    ptr ->sendMessage();

    ptr = &k;
    ptr ->sendMessage();

    /*
        taile abstruction tao kichu na. just khali ekta fucntion jetate pure virtual funciton thakbo. ar jeigula mane
        je class gula ei "abstruct class" ke inherit korbo tader o oi virtual function use korte hoibo. na korle error 
        dekhaibo..

        abar chaileo abstruct class er function chara onnno function create kora jabe na...

        ar jodi kono function "abstruct class" re inherit kore taile "abstruct funciton" ta must use korte hoibo. tobe chaile
        oi function e alada alada kichu add kora jaibo...
    */

    return 0;
}