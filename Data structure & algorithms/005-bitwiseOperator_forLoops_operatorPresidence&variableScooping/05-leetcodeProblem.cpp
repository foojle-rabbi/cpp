#include<iostream>
using namespace std;

int main()
{
    /*
    problem: 191. Number of 1 bits;

    explanation: ei problem tare kono ekta binary number e koto gula 1 ache tar number janar jonno bolteche; suppose i have 
    a binary number: 1100101011; ei khane 1 ache 6 ta; tai amar output ashbe 6;
    */

    int binary, count = 0;
    cout<<"Enter a binary number: ";
    cin>>binary;

    while(binary != 0){
        if(binary&1){
            count++;
        }
        binary = binary >> 1;
    }
    cout<<count;

    /*
    Accha ami jodi code ta explain kori taile eta hobe emn je; amre kichu ekta number dibo ar ami oi number er moddhe koto ta
    1 ache tar number return koira dimu; accha tar jonno amre bit level e kaaj korte hoibo mane amre ekta number dile tar 
    sathe ami biwise & kormu 1 dia; er fole jodi last digit 1 thake taile true mane 1 reutrn korbo; ar jodi 0 thake taile 0
    reuturn korbo; ebong check korar pore 1 bar right shift kore dimu fole number ek ghor aare choila jaibo; ar ei kaj ta ami
    totokkhon kormu jotokkhon na amar whole number 0 na hoiteche;
    */
    return 0;
}