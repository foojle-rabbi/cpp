#include<iostream>
using namespace std;

int factorial(int n){
    //base case 
    if(n == 0 || n == 1){
        return 1;
    }

    //recursive relation
    //accha eikhane ami jodi ektu bekkha korte jai taile amar aage factorial er recursion relation ta ber korte hobe; toh factorial 
    // er recursion relation ta hocche: fact(n) = n * fact(n -1);

    // int fact = factorial(n -1);
    // int ans = n * fact;


    return n * factorial(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "factorial of " << n <<" is : " << factorial(n) << endl;

    return 0;
}