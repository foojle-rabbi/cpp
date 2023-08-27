#include<iostream>
#include<math.h>
using namespace std;

// int pow(int base, int exp){
//     int ans = 1;
//     for(int i = 0; i < exp; i++){
//         ans = ans * base;
//     }

//     return ans;
// }
int main()
{
    // cout<<pow(5, 3)<<endl; ghorar dim inbuild function mane library function onek shomoy thik moto kaj kore na tai nijei 
    int binary;
    cout<<"Enter a binary number: ";
    cin>>binary;

    int i = 0, ans = 0;
    while(binary != 0){
        int digit = binary % 10;
        if(digit == 1){
            ans += pow(2, i);
        }
        binary = binary / 10;
        i++;
        
    }

    cout<<"Decimal number is : "<<ans<<endl;
    return 0;
}