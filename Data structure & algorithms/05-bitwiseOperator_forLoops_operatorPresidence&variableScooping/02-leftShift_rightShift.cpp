#include<iostream>
using namespace std;

int main()
{
    /*
    Accha left shift mane kono binary digit re bame shorano;
    ar right shift mane kono binary digit re dane shorano;

    << left shift; 5 >> 2; mane 5 er binary digit re 2 ghor right er shift kora;
    >> right shit;

    **eikhane left shift ar right shift er ekta tricks ache; jemon kono kichu re 1 bar left shift kora mane tare 2 dia multiply
    korar moto;

    abar 1 bar right shift er mane 2 dia vag kora;

    last e arekta kotha ei je tricks ta eta kebol choto shongkhar kkhetre kaj kore; boro intiger er jonno kaj kore na;
    */

    cout<<(19 >> 1)<<endl; //9
    cout<<(19 >> 2)<<endl; //4
    cout<<(22 << 1)<<endl; //44
    cout<<(22 << 2)<<endl; //88

    return 0;
}