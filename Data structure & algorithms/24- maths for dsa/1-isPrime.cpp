#include<iostream>
using namespace std;

bool isPrime(int n){
    if(2 > n){
        return false;
    }

    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    while(1){
        cout<<"Enter a number please: ";
        cin>>n;
        if(isPrime(n)){
            cout<<"prime number"<<endl;
        }else{
            cout<<"not a prime number"<<endl;
        }
    }
    return 0;
}