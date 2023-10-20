#include<iostream>
using namespace std;

inline int getMax(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int main()
{
    /*
    Inline funciton hocche emon ekta function jeta kom line er code er jonno effective. mane amra jodi ekta funciton call er kotha e 
    chinta kori. amra jotobar ekta function call kori totobar e sheita stack e new memory khay. ar tar moddhe joto variable ache shei
    gula o jay khay. 

    ekhon kotha hocche jodi amar oi function ta choto hoy taile ar ami eto memory khaoyamu kittam. oi tokhon e aiye inline function er 
    kheil. mane inline function macros er moto e automatic compile hoyar shomoy oi condition ta line e boshaiya dey;
    */

    int a = 5;
    int b = 10;

    int ans = getMax(a, b);
    cout << ans << endl;
    return 0;
}