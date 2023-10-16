#include<iostream>
using namespace std;

int main()
{
    // double pointer hocche emon ekta pointer jetar moddhe onno arekta pointer er address k store kore rakha hoy. 
    int a = 10;
    int *ptr = &a;

    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl << endl;

    cout << &ptr <<endl;
    int **ptr2 = &ptr; 
    cout << ptr2 <<endl << endl;

    cout << *ptr2 << endl;
    cout << **ptr2 << endl;

    /* 
    accha vai sohoj kothay koite gele double pointer er concept hocche eitao ekta variable mane special kind of varialbe jeta kina 
    pointer er adress store kore. ar eikhane 2 ta jinish mukkho kaj kore tar moddhe first hocche (& = jeitar mane hocche address of
    operator) ar arekta hocche gia (* = value at address of operator) 
    */
    return 0;
}