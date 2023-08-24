#include<iostream>
using namespace std;

int main()
{
    /*
    Variable scoping mane jei variable jei block {} e declare kora hoiche tare shudhu shei khanei use kora jaibo. niche aro
    shundor example deoua ache; valo kore dekh bujhte parbi;
    */

    int a = 5;
    cout<<a<<endl;
    if(true){
        int a = 10;
        cout<<a;
    }

    // normal jinish vai; variable jei block er moddhe declare korba shekhanei use korba;
    return 0;
}