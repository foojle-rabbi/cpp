#include<iostream>
using namespace std;

class firstClass{
    int a, b;
    public: 
        firstClass(); //constructor
        ~firstClass(); //destructor
        void display(void);
};

firstClass :: firstClass(){
    cout<<"Constructor is called"<<endl;
}

firstClass :: ~firstClass(){
    cout<<"Destructor is called"<<endl;
}

void firstClass :: display(void){
    cout<<"display function is called\n";
}

int main()
{
    firstClass object;
    object.display();

    /*
        ki fojle ki bujhla ei program dia? kichu bujho nai? run koro shob mone hoibo ar bujhte parba. taile ekhaner sumary
        dia bolte paro je constructor ar "destructor" automatic call hoy. ar tader name class er name er smae hoy.
        tarao function tobe special function.

        tachara dectruction function call hoy shob program shesh houar por.
    */
   firstClass object2;
   object2.display();
    return 0;
}