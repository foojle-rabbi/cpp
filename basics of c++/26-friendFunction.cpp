#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    friend complex sumComplex(complex objec1, complex object2);  //friend function declaration
        void takeData(int x, int y){
            a = x; 
            b = y;
        }

        void pritData(void){
            cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};


/*  vai hisab korle ei friend function kichui na, ekhon kuchui na mane hoitache gia suppose ami ekata function use banamu
ekhon oi function e ammi kono ekta class er private object (a, b) use kormu. kintu kotha hocche rule onujayi tumi to private
object use korte parba na onno kono local function theke. private object use korte hoile to tomar oi class er kono funciton 
hoite hoibo tai na. 

ekhon jodi tomar use e korte hoy tokhon ki korba? ar ei problem solve korar laigai "friend funciton" aiche. kono function 
oi class e declare na koirao just khali friend funciton declare koira private object gulare use korte parba. just simple */

complex sumComplex(complex object1, complex object2){
    complex o3;
    o3.takeData((object1.a + object2.a), (object1.b + object2.b));

    return o3;
}

int main()
{
    complex num1, num2;
    num1.takeData(2, 5);
    num1.pritData();

    num2.takeData(3, 8);
    num2.pritData();

    complex sum = sumComplex(num1, num2);
    sum.pritData();
    return 0;
}