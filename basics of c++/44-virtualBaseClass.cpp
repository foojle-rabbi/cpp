#include<iostream>
using namespace std;

class a{
    public:
        int x;
};

class b : virtual public a{ 
    public:
        void display(void){
        cout<<"here x is present "<<x<<endl;
        }
};

class c: virtual public a{
    public:
        void display(void){
        cout<<"here x is present "<<x<<endl;
        }
};

class d: public b, public c{
    public:
        void display(void){
        cout<<"which x will present?? "<<x<<endl; //ekhaen ambigous name ekta error show krobo
        }
};


int main()
{
    /*
        virtual base class bujanor age ami tore ekta situation er kotha boli. shoon, mone kor tor kahce moot 4 ta class ache 
        ekhon a er moddhe ekta member variable ache "int x" name; ekhon tui a class theke 2 ta class inheit korli. mane multiple
        inheit; mone kor b ar c er base class hochhe a; tar mane b ar c er modhde "int x" variable ta chole jabe ba inherit
        hobe. 

        ekhon tui kor tui arekta "d name class" declare korli jar base class hocche "b and c" orthat multiple inheit; taile
        d class er modhe "b ar c" er varibale jaoyar kotha tai na? tar mane "int x" O jaibo/ ekhon tui amare koo tooh kon
        class er "int x" jaibo? class b er naki class c er? 

        ki bolte parbi? setai no answere. ar ei error solve kroar jonnoi ache "virtual base class" concept. tai jokhon amra a
        theke b ar c create korbo tokhon virtual keyword use krobo. jate kore future e "int x" er matro ekta copy e onno class er
        moddhe jay...
    */
    return 0;
}