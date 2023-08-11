#include<iostream>
using namespace std;

class base{
    protected:
        int a;
    private:
        int b;
    public:
        int c;
};

class derived : protected base{
    public:
        int d;
        void display(void){
            cout<<"Value of a: "<<a<<endl;  //private deoyar base class a accessable but its now became private member of "derived"
            // cout<<"Value of b: "<<b<<endl; //b jehetu private member tai inaccessable;
            cout<<"Value of c: "<<c<<endl; //protected member ekahneo protected;
        }
};

class a{
    protected:
        int a;
};

class b : protected a{
    protected:
        int b;
    public:
        int bb;
        void display(void){
            cout<<a<<endl;
        }
};

class c : protected b{
    public:
        void show(void){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<bb<<endl;
        }
};

int main()
{
    /*
    accha jak etokkhone ailo protected er kahini. Bepar nah. Cholo code er maddhome amio bujhi, 
        okay ekhon jodi ami summary kori taile, 

        prothomoto amar base class er private member gula jei access modifier user koruk na keno, ta inaccessable(haa, tobe
        chile ta member function er maddhome getvalue dia nite pare.) ;

        tarpor base class er public member gula jodi visibility public dey, tahole base class ebong derived calss dui tar
        member e private thakbo..
            tar moddhe base class er public member gula re doi visibility mode private dey, tahole derived calss e sei 
            member gula private member hooiya jay..

        **eibar asho : protected;
            taile base class er protected member gulare shob dervied calss gula user korte parbo. tobe main fuvntion theke 
            segula accessable noy;

            eibar asho: visibility mode protected;
                accha vai jai hook "public ar private clear" but protected nia ektu chatgpt re lara dich...

    */
    derived d;

    //visibitlity mode: "private";
    // d.a = 11;   ekhne visibitly mode private doeyar kono member kei acchess kora jacche na..
    // d.b = 11;
    // d.c = 11;

    //visibility mode: public:
    // d.a = 22;
    // d.b = 22; //public mode deoyay kebol public member e acchess koraa jacche..
    // d.c = 15;

    // visibility mode: protected
    // d.a = 22;
    // d.b = 22; //prtotected er moddher shob e private hoya jay..
    // d.c = 15;

    b object;
    c object2;

    object2.show();

    object.bb = 5;
    return 0;
}