#include<iostream>
using namespace std;

string val = "global varibale";

void update(int value){
    local = 100; //now i cant use the local vaiable in here as that is a local variable;

    int age = 22;
    val = "accessing from update funciton";
}

int main()
{
    /*
    Accha local ar global variable kare koy; local variable mane jei ta kebol kono nirdisto ba specefic funtion e i use kora jaibo. ar
    global variable hoilo jei tare jei kono function ba score er moddhe use kora jaibo; 

    kono ekta funtion e variable declare kora mane oita oi function er moddhei shima boddho thakbe ar eitare kebol ei function e use kora 
    jaibo ar kono variable main er upor ba shoboj kothay koile #include er eidike declare kora manei gloabbly declare kora. er mane eitare
    jei kono function theke access korte parbe;

    
    --> tobe eita ekta bad practice; kaoron jehetu eitare shob function thekei use kora jay tai eitar value o jei kono function chnage korte
    parbo. ar tor toh graph korte gia e emon ekta problem hoichio tui int i; ke golabally declare koira use korary tor baki funciton gulate
    effect porche.
    */

    int local = 21; //eita ekta local variable. and it could be only used in this main funciton
    age = 200; // eije ami eikhaneo oi update funciton er aage tare use korte parumu na. karon oita kebol update function er jonno e;
    val = "can access form main functon as it is a glabal variable";
    return 0;
}