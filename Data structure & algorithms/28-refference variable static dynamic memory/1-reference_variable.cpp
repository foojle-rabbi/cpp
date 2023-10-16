#include<iostream>
using namespace std;

void update(int &a){
    a++;
    cout << "value Of a: " << a << endl;
}

int main()
{
    // int a = 10;
    // int b = 10;

    // // cout << a <<endl;
    // // cout << b << endl;

    // a = a + 2;
    // cout << a <<endl;
    // cout << b << endl;

    // int age = 12;
    // int &age2 = age;

    // cout << age << endl;
    // cout << age2 <<endl;

    // cout << &age <<endl;
    // cout << &age2 << endl;

    // age2 = 0;
    // cout << age << endl;
    // cout << age2 <<endl;
    
    int number = 11;
    update(number);
    cout << "value of number in the main function: " << number <<endl;
    return 0;
}