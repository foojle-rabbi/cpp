#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    int prime = 1;
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            prime = 0;
            break;
        }
    }

    if(prime){
        cout<<number<<" is a prime number"<<endl;
    }else{
        cout<<number<<" is not a prime number"<<endl;
    }
    return 0;
}