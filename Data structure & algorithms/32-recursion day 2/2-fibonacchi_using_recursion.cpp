#include<iostream>
using namespace std;

int fibonacchi(int n){
    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    // recursion relation
    return fibonacchi(n -1) + fibonacchi(n - 2);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "fibonachi of " << n << " is : " << fibonacchi(n) << endl;
    return 0;
}