#include<iostream>
using namespace std;

class test{
    int d, e, f, sum;
    int addFunction(void);

public: 
    void setValue(int x, int y, int z){
        d = x;
        e = y;
        f = z;
    }
    void printValue(void){
        cout<<"The value of d : "<<d<<endl;
        cout<<"The value of e : "<<e<<endl;
        cout<<"The value of f : "<<f<<endl;
    }

    int addClass(test object1, test object2){
        return (object1.addFunction() + object2.addFunction());
    }

};

int test :: addFunction(void){
    sum = d + e + f;
    return sum;
}

/*
    ekhane temon kichu na. jodi ami summmary kori, taile bola zay je, class structure er motoi. tobe there are a lots of 
    differences. and class is more more advance than structue. jemon structure er shobgula "element" jekhan theke mon
    chay sekhan theke use kora jay. but class er kkhetre ekmon ta na. 

    class er moddhe 2 ta section thake.ekhat hoiteche "public" and another is "private". tobe default vabe shob elements gula
    private e thake. public kora lage. taile public er elements gula jei kono function theke use kora gleeo private er gula 
    jekeno funciton theke use kora jay na.

    private elements/objext gula kebol matro use korte parbe public/private function gula or i should say member function.
    tai jekhane amra structure e directly data assign korte partam sekhane class er kkhetre parbo na. parbo shudhu public 
    er gula. private er gula na. 

    
    abar chaile ami class er vitore o function define korte parbo. jemon ami "void setData(void)" name ekata function create
    korbo tar jonno amake class er moddhe | oi funciton er return type - class name - :: - function name(arguments);

*/

int main()
{
    test t;
    t.setValue(1, 5, 8);
    // t.printValue();

    test t2;
    t2.setValue(2, 5, 9);

    test t3;

    cout<<"The value of both classes is: "<<t3.addClass(t, t2);
    return 0;
}