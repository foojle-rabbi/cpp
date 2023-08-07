#include<iostream>
using namespace std;

int main()
{
    int number, first, second, fibo, count = 0;
    first = 0;
    second = 1;

    cout<<"Enter a number: ";
    cin>>number;

    while(count != number){
        if(count == 1 | count == 0){
            fibo = count;
        }else{
            fibo = first + second;
            first = second;
            second = fibo;
        }
        cout<<fibo<<" ";
        count++;
    }
    return 0;
}