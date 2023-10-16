#include<iostream>
using namespace std;

int main()
{
    /*
    Accha basics of pointer ar ki. er aage je topic gula poira aichi oigula e. just ekhane aro ektu valo kore shikhte parchi. 

    toh pointer ki? pointer hocche ekta variable. a special kind of variable which stores address of another variable of its own type. 
    mane eita onno ekta variable er mermory address store kore. 

    jemon ami jodi ekta variable decalre kori. int a = 5; tar por arekta pointer create kori int *ptr = &a; er mane amar int a er jei 
    memory adress ache seita oi ptr er moddhe store hoye ache;

    ar ekhane arekta kotha : 
        & = mane hocche adress of
        * = dereference operator; jar mane hocche :- value at address 
    */

    int a = 10; 
    int *ptr = &a;

    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout << *ptr << endl;
    return 0;
}