#include<iostream>
using namespace std;

int setBits(int number){
    int count = 0;
    while (number != 0)
    {
        if(number &1){
            count++;
        }
        number >>= 1;
    }
    return count;
}

bool isPowerOfTwo(int number){
    if(number < 1){
        return false;
    }

    int count = 0;
    while(number != 0){
        if(number&1){
            count++;
            if(count > 1){
                return false;
            }
        }
        number >>= 1;
    }
    return true;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    // cout<<"Number of set bits (1) is : "<<setBits(number)<<endl;
    if(isPowerOfTwo(number)){
        cout<<"Power of two"<<endl;
    }else{
        cout<<"Not power of two "<<endl;
    }
    return 0;
} 