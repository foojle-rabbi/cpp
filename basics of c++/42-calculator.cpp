#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a, b;
    public:
        void getValueSimp(void){
            cout<<"Enter the first value: ";
            cin>>a;
            cout<<"Enter the second value: ";
            cin>>b;
        }

        void perfromSimp(void){
            cout<<"The sum is :"<<a + b<<endl;
            cout<<"The substruction is :"<<a - b<<endl;
            cout<<"The Multiplication is :"<<a * b<<endl;
            cout<<"The division is :"<<a / b<<endl;
        }
};

class sc{
    int a;
    public:
        void getValue(void){
            cout<<"Enter a value: ";
            cin>>a;
        }

        void performSci(void){
            cout<<"cos(a) : "<<cos(a)<<endl;
            cout<<"tan(a) : "<<tan(a)<<endl;
            cout<<"exp(a) : "<<exp(a)<<endl;
            cout<<"sin(a) : "<<sin(a)<<endl;
        }
};

class hybrid : private SimpleCalculator, private sc{
    int choice;
    public:
        void letsStart(void){
            cout<<"1. simple calculator."<<endl;
            cout<<"2. scientific calculator."<<endl;
            cout<<"Enter your choice: ";
            cin>>choice;

            switch (choice)
            {
            case 1:
                getValueSimp();
                performSci();
                break;
            case 2:
                getValue();
                performSci();
            default:
                cout<<"Wrong number;"<<endl;
                break;
            }
        }
};

int main()
{
    //scientific and normal calculator
    // SimpleCalculator calc;
    // calc.getValueSimp();
    // calc.perfromSimp();

    // sc sci;
    // sci.getValue();
    // sci.performSci();

    hybrid h;
    h.letsStart();
    /*
        are eta tmn kichui na. ki banaichi na banaichi ami nijeo jani na. harry miaay koice ar ami banaichi. hudai ree...
    */
    return 0;
}