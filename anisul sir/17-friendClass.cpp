#include<iostream>
using namespace std;

class a{
    int roll;
    int reg;
    public:
        friend class b;
};

class b{
    public:
        a object;   //first you need to create an object;
        void display(){
            cout<<"roll :"<<object.roll<<endl;
            cout<<"reg : "<<object.reg<<endl;
        }
};

int main()
{
    /*
        okay, Anisul islam sir er mote, jodi kono class er function othoba member use korte chay, tahole take friend class
        banate hobe;

        tahar vasshomote,
            1. "friend class class_name" thakbe hobe public section e;
            2. je class use korbe, aage take tar object create korte hobe 
            3. tarpor shei object er maddhome oi member/variable gulare use korte parbe;
    */


    return 0;
}