#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    // int number;
    // cout<<"Enter a number: ";
    // cin>>number;

    // int r, reverse = 0;
    // while (number != 0)
    // {
    //     r = number % 10;
    //     reverse = reverse * 10 + r;
    //     number = number /10;
    // }
    
    // cout<<"Reverse number is : "<<reverse<<endl;

    //second approch 
    int num1, num2, num3;
    int ans = 0;
    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;

    ans = (num1 * pow(10, 0)) + ans;
    ans = (num2 * pow(10, 1)) + ans;
    ans = (num3 * pow(10, 2)) + ans;
    cout<<"Reverse Flow "<<ans<<endl; // i dont know why is thing giving me 1 less

    ans = 0;
    ans = (ans * 10) + num1;
    ans = (ans * 10) + num2;
    ans = (ans * 10) + num3;
    cout<<"Same flow "<<ans<<endl;
    return 0;
}