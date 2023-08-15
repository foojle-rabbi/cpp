#include<iostream>
using namespace std;

class msg{
    protected:
        int a, b;
    public:
        virtual void display() = 0; // etar manei hoiteche pure abstruct function;
};

class rahim : public msg{
    public:
        void display(){
            cout<<"this is the display function of rahim"<<endl;
        }
};

class karim : public msg{
    public:
        void display(){
            cout<<"this is the display function of karim"<<endl;
        }
};

int main()
{
    /*
    Okay ajke amra dkhbo/shikhbo abstruct base class shomporke. prothome ashi abstruct base class koy kare? je base class er
    moddhe pure abstruct class thakbe tarei abstruct base class bola hobe. ekhon pure abstruct class abar ki? pure abstruct
    function:(" virtual void FunctionNmae() = 0;") etar manei pure abstruct function;
    etar arekta name hocche: do nothing function;

    ar hee, abstruct function class bananor uddeshoi jate er maddhome (pointer dia) baki class gularre jate valo moton access
    kora jay; 
    
    OOh ho notun jinish abstruct class er kono object create kora jay na;
    */

    msg *ptr;
    // msg obj; //abstruct class er kono object create kora jay na;
    karim k;
    rahim m;

    ptr = &k;
    ptr -> display();

    ptr = &m;
    ptr ->display();
    return 0;
}