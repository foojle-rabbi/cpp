#include<iostream>
using namespace std;

//recursion is a function which call itself
int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    int fact = n * factorial(n-1);

    return fact;
}

int fibonacchi(int n){
    if(n < 2){
        return 1;
    }

    return fibonacchi(n-1) + fibonacchi(n - 2);
}
int main()
{
    cout<<factorial(4)<<endl;
    cout<<fibonacchi(5)<<endl;
    return 0;
}