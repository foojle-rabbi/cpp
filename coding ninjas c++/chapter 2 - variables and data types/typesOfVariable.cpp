#include<iostream>
using namespace std;

class var{
    public:
    int num; // ei num ta holo amar intance variable; karon ami jodi var class er 2 ta object create kori taile oi 2 obj num er jonno 2 ta space paibo.

    //but static er jonno onno niyom;
    static int sum;

};

 int var :: sum = 0;

int main()
{
    /*
    there are 3 types of variable:
    1. local variable
    2. intance variable
    3. static variable

    1. local variable jani

    2. intance variable mane amra je normally ekta class create kori oi khane jodi ekta num name e ektaa variable create kori taile oi 
    class er joto gula object create kormu toto gula num e create hoibo alada alada memory te.

    3. ar static varialb hoilo oi shokol variable jader kono jayga change hoy na. tara kebol memory erkta jayga program shesh houar ag 
    porjonto dhore rakhe. upore ekta example dichi valo kore dekh.
    */

   var obj1;
   var obj2;

    obj1.num = 5;
    obj2.num = 5;

    cout << "num of object 1 is: " << obj1.num << endl;
    cout << "num of object 2 is: " << obj2.num << endl;

    obj1.sum = 5;
    obj2.sum++;

    cout << "num of object 1 is: " << obj1.sum << endl; 
    cout << "num of object 2 is: " << obj2.sum << endl; 

    /*
    accha ei kahne amar sum 2 object er hoileo amar memeoy te kintu matro ekta sum ache. mane ei object 1, 2 er 2 ta sum memroy er jay ga 
    na kahiya eigual 2 houk ar 10 ta houk tader jonno matro ekta memroy e thakbo "static" keyword use korar karone;
    */

    /* ar const keyword mane oi intiger er value pore change kora jaibo na*/
    return 0;
}