#include<iostream>
using namespace std;

template <class t1, class t2>
class myClass{
    t1 data1;
    t2 data2;
    public:
        myClass(t1 a, t2 b){
            data1 = a;
            data2 = b;
        }

        void display(void){
            cout<<data1<<endl<<data2<<endl;
        }
};

int main()
{
    /*
    Okay not to worry, cause multiple paramenter kichui na, ekhon kichui na mane; mone koro amar ekta class dorkar jekhane 
    ami 2 type er variable nia kaaj kormu. mane ta hoite pare int, flaot hoite pare flaot char, hoite pare int char etc etc;
    
    ekhon ami jodi 2 type er jonno class banate jai taile amar onekgula class banaite hoibo na. toh seta na korar jonnoi 
    arekta option ache multiple template mane. 2 3 4 5 6.. dhoroner template o ami chaile banate parbo; lets see the syntax;
    
    template <class t1, class t2> ei tukui;
    ar main function e declare korar shomoy : 
        int main(){
            classNmae <float, int> object;
        }
    */

    myClass <char, float> object('J', 5.1); //do you know what is mean by word "j"?
    object.display();
    /*
        Accha chele dekh, eto pera khaich na. karon tui toh abar pera nech beshi khach o beshi. Eibar shoon, Jokhon amader
        2-3 type er variable type nia kaaj korte hoy tokhon amra multiple temple nia kaaj kori. arr object make korar shomoy
        er type declare kore dei <type1, type2, type2....>;
    */
    return 0;
}