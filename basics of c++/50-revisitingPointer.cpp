#include<iostream>
using namespace std;

int main()
{
    /*
    Asha kortechi Mr. fojle apnaar pointer shomporke valo dharona ache. shono pointer hocche ekta variable sorry special types
    of variable jeta kina Onno variable er address store kore. Pointer je type er variable er address korbe takeo shei
    type er hotte hobe.. jemon, jodi pointer integer variable er address store kore tahole takeo intiger hoite hoibe..
            int a = 5;
            int *ptr = &a;
    ekhaen (int*) pointer indicate kore. (&) means address of. ar (*) means value at address.

    tui toh "c programming " e dynamic memorry allocation dekhchos. ekhaneo dynamic memory allocation ache. ar hoo dynaically 
    means run time allocate kora. c++ te dynamicaaly memory allocate kroar syntax: int *a = new int(5); --> etar mane 
    hoiteche ami dynamically ekta intiger declare korchi jaar value 5; tarporeo tore code koira dekhaitechi....
    */

    int a = 5;
    int *ptr = &a;

    cout<<"The address of a is : "<<&a<<endl; //etar mane jemon address of a
    cout<<"The address of a is : "<<ptr<<endl; // ptr jehetu a er address point kore ache tai ptr er value o same;
    cout<<"The value of address "<<ptr<<" is : "<<*ptr<<endl; //ektu age je koilam * menas value at address;

    //accha eigula toh gelo c er topic er moto ar syntax o pray same; ei dekho c++ er kichu notun syntax and concepts:
    int *age = new int(19); // etar mane holo ami dynamically age variable create korchi jaar vlue 19;
    cout<<"Your age is : "<<*age<<endl; //ooh sorry! shudhu age er mane address; ar *age means 19

    //arekta way dekh:
    int size = 3;
    int *array = new int[size]; //etar mane holo ami int type er ekta 5 size er array dynamically create korlam..
    array[0] = 5;
    array[1] = 10;
    array[2] = 15;

    *(array + 1) = 22; //etar karone index 1 er value chnge hoiya 22 hoiya jaibo;

    // arekta keyword ache "delete"
    delete[] array; //bujhalam na shob e toh thik ahe taile array[2] er value thik dekahy keno?

    cout<<"The value of array[0] is : "<<array[0]<<endl;
    cout<<"The value of array[1] is : "<<array[1]<<endl;
    cout<<"The value of array[2] is : "<<array[2]<<endl;

    //I think pointeer nia confution durr hoiche.
    return 0;
}