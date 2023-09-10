#include<iostream>
#include<set>
using namespace std;

int main()
{
    /*
    Multi set o set er motoi but ekta difference ache; tobe eitar kkhetre o 2 ta kotha mathay rakhba:
        1. Everyting will be in sorted order
        2. There will be duplicates

    
    */

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);        
    ms.insert(1);
    ms.insert(1);
    //ekhane shob gula 1 e insert hobe;

    ms.erase(1); // ei kkhetre abar shob gula 1 e delte hoiya jabe;
    ms.erase(ms.find(1)); //tobe ekhon shudu jekono ekta 1 e erase korbe; karon amra jani, find kebol iterator rerurn kore;

    /*
    Ar baki shob gula set er motoi. function/operation gula o pray same e;
    */
    return 0;
}