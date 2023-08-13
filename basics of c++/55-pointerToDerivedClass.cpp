#include<iostream>
using namespace std;

class base{
    public:
        int b;
        void display(void){
            cout<<"the value of b is: "<<b<<endl;
            cout<<"this is the body of base class"<<endl;
        }
};

class derived : public base{
    public:
        int d;
        void display(void){
            cout<<"the value of b is: "<<b<<endl;
            cout<<"the value of d is: "<<d<<endl;
            cout<<"This is the body of derived class"<<endl;
        }

        void test(void){
            cout<<"this is a fucntion to check the polymorphims things"<<endl;
            /*
                dekh ekta notun jinish (amar laiga) jemon polymorphism manei hoitache many form. ar many form hoiteche
                eki type er jinisher. mane mone kor 2 ta class nili ebong single inheit korli. 2 tar moddhei display funciton
                ache ekhon tui base class er pointer create koira devired class er object re point koira derived class er
                display funtion re access korte parbi(jodi virtual keyword) use koroch. etai hoitache polymorphism er ashol
                khini...

                tarpor ami ja bujhlam je, tui chileo base class er pointer dia(jodio seta derived class re point koira ache) tui
                chaileo derived calss er onno function re oi pointer dia access korte parbi na... tui kebol oi shokil function
                use korte parbi jeigula base class e ache. ar tarjonnoi mone hoy etar name polymorphism..
            */
        }
};

int main()
{
    base *ptr;
    // base object;
    // ptr = &object;
    // ptr->b = 55;
    // ptr -> display();
    
    /*
        accha ami jodi code tare normally analysis kori taile eita bola jay je. ami 2 ta class create korchi. ar ektare arektar
        moddhe inherit korchi. ar 2 tar moddhei display function ache. tarpor ami base class er ekta poointer create korchi
        accha etao thik ahce. tarpor ami pointer tare point koraichi base class er e ekta object re.. tar por value set
        korchi tarpor display function re pointer dia invoke korchi, shob thik thak moto kaj korche. ar korar e kotha...

        accha tarpor abar ami jokhon arekta derived class er object create korlam tarpor oi base class er pointer re eitar
        moddhe mane derived class er object re point korailam tokhon keno jani derived class er variable memeber re access
        korte partechilam na. accha jak oita fact na. tarpor ami base class er pointer dia(jeta kina derived calss re point)
        koira rakhte tare did display function re casll korchi kintu derived class er diplay call na hoiya, hoiche base clss
        er dipslay..

        ar er karon hoiteche (virtual funviotn) jak jetaa nia amra pore likhbooo..
    */

    // derived objectD;
    // ptr = &objectD;
    // ptr->display();
    // ptr -> d = 55;// jehetu pointer ta hoitache base class er tai ami base class er variabel access korte partechi na;

    // derived *p = &objectD; //derived class er pointer dia abar khub easily derived class er funcion re call kora jay.
    // p ->d = 24;
    // p -> b = 523;
    // p -> display();
    derived objectD;
    ptr = &objectD;
    ptr -> display();
    ptr -> test(); //jehetu base er kono member nai (test()) name tai error dekhaiteche..
    return 0;
}