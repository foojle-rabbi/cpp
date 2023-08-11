#include<iostream>
using namespace std;

class base{
    protected:
        int a;
        int b;
    public:
        base(int x, int y){
            a = x;
            b = y;
        }
};

class derived : public base{
    int c, d;
    public:
        derived(int x, int y, int z, int xy)
        : base(x, y) //base class er construcotr 
        {
            c = z;
            d = xy;
        }

        void display(void){
            cout<<"the values are: "<<a<<endl
            <<b<<endl
            <<c<<endl
            <<d<<endl;
        }
};

int main()
{
    /*
    Prothomei kichu properties deikha loi...
        1. [a --> b] ekhane jodi a er constructor thake tahole ta automatic invoke hobe;
        2. [a--> b] ekhon ami chile b er constructor re value pass kore, b er maddhome, a er value pass korte;
        3. Argument thakuk ar na thakuk base class er construcotr age call hoy;
        4. Multiple inherit er kkhetre jei class er ullekh age thakbe sei class er constructor aage call hobe;
            class x : public a, public b;   
            taile ekhaen aage a er constructor call hobe then b er constructor.
        5. MultiLevel construcote er kkhetere jei clasa age thakebe sei class er construcote aage call hobe;
        6. constructor jodi virtal base class er hoy tahole aage virtual base class er consturctor aage call hobe then non
            virtual class er gula invoke hobe;
        7. Ekhon jodi abar multiple virtual class thake tahole serial wise class hobe. ager ta age porer ta pore/ then eigular
            pore call hob e non virtual gula;

            syntax:
                    derived(number of argument)
                    : base class(argument), base2(argument)
                    {
                        argumetns;
                    }
    */

    derived d(1, 3, 5, 8);
    d.display();
    return 0;
}