#include<iostream>
using namespace std;

int setBits(int a, int b){
    int count = 0;
    while(a != 0){
        if(a & 1){
            count++;
        }
        a >>= 1;
    }
    while(b != 0){
        if(b & 1){
            count++;
        }
        b >>= 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Number of set bits: "<<setBits(a, b)<<endl;
    return 0;
}