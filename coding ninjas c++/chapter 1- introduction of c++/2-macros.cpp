#include<iostream>
using namespace std;

//using macros
#define VALUE 5 // ar hae macros define korar shomoy terminator (;) use korte hoy na.

//using argument
#define AREA(length, width) (length * width) 
//tar mane bujha gelo ami macros re function er moto use korte parbo ar first () e argument () second e return value;

int main()
{
    /*
    accha prothome amake jante hobe what is macros. Macros is a one kind of word which complier automatically replace the value while
    runing. jodio ami hoyto thik moto bujhaiya bolte pari nai. but the concept is je ekta lekha thakbe jetake define kora hobe ebong
    jokhon e program ta run hobe tokhon e oi lekha tate joto value ache ta whole program e replace hoy jabe.



    ar hae macros e function er moto argument o pas korra jay; eboong eita vlaue o return kore. baki ta clear hobe jodi example gual valo
    vabe dekho..
    */

    cout << VALUE << endl;
    cout << AREA(5, 4) << endl;

    return 0;
}