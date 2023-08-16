//Full name: member function template & overloading tempalte
#include<iostream>
using namespace std;

template <class t>
class myClass{
    t a;
    public:
        myClass(t val){
            a = val;

        }

        void display(void);
};

// void myClass :: display(){
//     //eta hocche amra normally je funcion er kaj kori oi syntax; kintu ei syntax e error show kortahce karon amra jehetu
//     //classs er moddhe template use korchi oi template type koi;
// }

// ar eta hoche bahir thaika member function re access korar sytax(template thakle)
template <class t>
void myClass<t> :: display(void){
    cout<<a<<endl;
}

void showInt(int a){
    cout<<"show int function"<<endl;
}

template <class ho>
void showInt(ho b){
    cout<<"show template function"<<endl;
}

int main()
{
    /*
    Accha taile ajke amra ei code 2 ta jinish dkehbo;
        1. member function template;
        2. function overloading template;
    1. member function template:
        er mane hoiteche amra onek shoomoy class er moddhe function declare kori kintu er jei main kam kaj ta bahire (define)
        kori; ar etai amra jodi template use kori tahole kivabe korte parbo setai dekhbo;
    
    2. function overlaoding:
        eita valo babe bujhte hole nicher moddhe jei example ar explanation dichi seta follow kor;

    */

    myClass <string> obj("Jannatul");
    obj.display();

    showInt(5); //acchar ekhane ami 2 ta function er name jehetu smae rarkhchi ar int pathaichi tai kon function ta invoke
        // houar kotha? ekta confusion na; ashole "Exact match funciton takes the highest priority" tar mane ekahne intiger 
        // er ta call hobe

    showInt("Jakia"); //eikhne aisha template oyala ta invoke hobe

    return 0;
}