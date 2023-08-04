#include<iostream>
using namespace std;

class student{
    const int roll;
    public:
        student(int x) : roll(x){ //are boka jehetu const variable er vlue pore assign kora jay na tai ei podduti.
            cout<<roll<< endl;  
        }
};
int main()
{
    student fojle(55);
    return 0;
}