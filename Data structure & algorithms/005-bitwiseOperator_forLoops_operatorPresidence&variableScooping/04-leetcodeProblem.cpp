/*name: 1280-Substruction of product and sum of digit;
Age problem ta explain kori: problem ta hoiteche gia amre ekta number er digit er product mane gunfol ar sum mane jogfol er
substruction bahir korte hoibo : mane : 123 ei number er product = 1 . 2 . 3 = 6; and sum of digit= 1 + 2 + 3 = 6; 
sutorang subtruction = 6 - 6 = 0;
*/ 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int sum = 0, product = 1, remainder;
    while(n != 0){
        remainder = n % 10;
        product *= remainder;
        sum += remainder;
        n = n /10;
    }

    int subs = product - sum;
    cout<<subs<<endl;
    return 0;
}