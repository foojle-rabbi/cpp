#include<iostream>
using namespace std;

class base{
    int a;
    string name;
    public:
        int b;
        void display(){
            cout<<name<<endl;
        }
};

class derived : private base{
    int c;
    public:
        void setValue(int x){
            // a = x; //jehetu "a" base class er private variable tai ami chaileo take access korte parbo na.
            b = x; //jehetu b public member tai acchess korte partechi.
        }
};

int main()
{
    /*
    okay first of all what is inheritence.? inheritence temon kichu na jsut khali ekta class theika arekta class er jinish gula 
    inherit ba uttoradikar korar ekta process, jemon, babar gun chelr moddhe paoya jay. abar notun gun o add hoy. oi rokom
    kichui chinta korte parosh. 

    mone kor ekta class e a, b, c ei 3 ta variable ache ar dislplay nam e arekta function ache. ekhon tui jodi onno ekta
    class theke class tare inherit koroch taile tui 3 ta variable ar display function re access korte parbi. Ete kore tor
    code "reusability" hobe. orthat ek code e bar bar lekha lagbo na.. 

    inherit er kichu properties: 
        1. Defalult visibity mode "private" thake.
        2. kono class er private memeber kokhono accessable noy.
        3. ar visibility mode public mane "base class" er public member derived class eo public thakbo.
        4. ar visibility mode private mane "base class" er public member derived class er private member.

    */

    derived d;
    // d.b = 5; //ami ekhane "d" ke acchess korte partechi karon d base class er public member abong derived class er visibility
                //mode public;
    d.setValue(6);
    // d.display() //display function call hobe na. jodi ami visibility mode private dei..
    return 0;
}