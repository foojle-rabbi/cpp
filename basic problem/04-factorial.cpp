#include<iostream>
using namespace std;

int main()
{
    int number, fact = 1;
    cout<<"Enter a number: ";
    cin>>number;

    for(int i = 1; i <= number; i++){
        fact = fact * i;
    }

    cout<<"Factorial of "<<number<<" is : "<<fact<<endl;
    return 0;
}