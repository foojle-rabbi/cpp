#include<iostream>
using namespace std;

int main()
{
    int number, i, r;
    int reverse = 0;

    cout<<"Enter a number: ";
    cin>>number;
    int temp = number;
    while (number != 0)
    {
        r = number % 10;
        reverse = reverse * 10 + r;
        number = number / 10;
    }

    if(temp == reverse){
        cout<<"palindorme number"<<endl;
    }else{
        cout<<"not palindorme number"<<endl;
    }
    
    return 0;
}