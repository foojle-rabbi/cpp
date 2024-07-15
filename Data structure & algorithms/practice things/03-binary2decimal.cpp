#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int binary;
    cout<<"Enter a binary number: ";
    cin>>binary;
    
    int ans = 0, i = 0;
    while (binary != 0)
    {
        int digit = binary % 10;
        if(digit == 1){
            ans = ans + pow(2, i);
        }
        i++;
        binary /= 10;
    }
    
    cout<<"Decimal is : "<<ans<<endl;
    return 0;
}