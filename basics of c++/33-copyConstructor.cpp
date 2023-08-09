#include<iostream>
using namespace std;

class test{
    int x;
    public:
        test(){}
        test(int x){
            this -> x = x;
        }

        void display(void){
            cout<<"Values are: "<<x<<endl;
        }
};

int main()
{
    /*
        Every class object has a copy constructor. orthat proti ta class er e ekta copy constructor thake..

    */

    test t, u, v(5);
    t.display();
    u.display();
    v.display();

    test w(v); //evebeo coy hoy tobe: w = v; evabe hoy na;
    test x = v; //evabeo cpy hoy
    w.display();
    return 0;
}