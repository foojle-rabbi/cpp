#include<iostream>
using namespace std;

class base{
    public:
        int b;
        virtual void display(void){
            cout<<"Thsi is display of base"<<endl;
        }
};

class drived : public base{
    public:
        int d;
        void display(){
            cout<<"Body of derived display"<<endl;
        }

        void show(void){
            cout<<"this is show function"<<endl;
        }
};

int main()
{
    base *ptr;
    base obj;
    drived objD;
    ptr = &objD;
    
    ptr -> display();
    ptr -> show(); /*er mane ami polymorphism er keta system hocche tumi pointer dia ek type er funciton re access korte parba
                mane jehetu 2 tatei display funcitonache tai tumi pointer dia shudhu display funciton gulare ei access korte parba..
                ar ho access korte parba tobe (virtula) keyword use korte hoibo*/
    
    return 0;
}