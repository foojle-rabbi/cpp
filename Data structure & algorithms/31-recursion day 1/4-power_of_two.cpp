#include<iostream>
using namespace std;

int power(int n){
    // base case
    if(n == 0){
        return 1;
    }

    //recursion relation
    return 2 * power(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Powr of 2 to the power " << n << " is " << power(n) << endl;
    return 0;
}

utilize the code studio's guide path section