#include<iostream>
using namespace std;

class a{
    public:
        virtual void display(void){
            cout<<"Body of a class display funviton"<<endl;
        }
};

class b: public a{
    public:
        void display(void){
            cout<<"Body of b class display funviton"<<endl;
        }
};

int main()
{
    /*
    Virtual function ar ki? ektu age amra polymorphism er ekta example dekhchilam na. oitar moddhe 2 ta class chilo na? ekta
    base class ar arekta hocche derived class ekhon tader moddhe inheit ache. ekhon 2 tar moddhe same funciton jodi thake
    tahole ami base class er pointer dia derived class er object re point koira oi display funciton re invoke korte parum..

    kintu kotha hocche jokhon amra emon ta korte jai tokhon shudhu base class er display function e run hoy ar er karon hocche
    (virtual keyword missing chilo). ar ei virtual keyword ekek calss er jonno ekekta funciotn run kore..
    */

    a objectA;
    b objectB;

    a *ptr = & objectB;
    ptr->display();
    return 0;
}