#include<iostream>
using namespace std;

int main()
{
    /*
    accha pointer je ki sheta toh amra goto lecture e dekhchilam. 
    */
    int arr[] = {1, 2, 5, 3, 0, 12};

    int *ptr = &arr[0]; 

    cout<< arr << endl;
    cout << ptr << endl;

    cout << arr[2] <<endl;
    cout << *(arr + 2) << endl; 

    //abarr i[arr] etao possible.
    cout << 2[arr] << endl;

    // ei lecture e eitukoi je pointer ki, ebong ta kivabe kaaj kore, pointer array er moddhe kivabe thake ar arr manei oi array er prothom
    // index er adress. ar er por theke baki memory gula contigous vabe thake. ei arki...
    return 0;
}