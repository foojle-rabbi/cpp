#include<iostream>
#include<cmath>
using namespace std;

// class test{
//     public:
//     int pow(int base, int exp){
//         int ans = base;
//         for (int i = 0; i < exp; i++)
//         {
//             ans = ans * base;
//         }
//         return ans;
//     }
// };

int powr(int base, int exp){
        int ans = 1;
        for (int i = 1; i <= exp; i++)
        {
            ans *= base;
        }
        return ans;
    }

int main()
{
    /*
    2 ta new jinish shikhlam 
    1. ans = (ans * 10) + remainder;
    2. ans = (digit * pow(10, i)) + ans;
    */  

    cout<<powr(5, 3)<<endl;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int bit, ans = 0, i = 0;
    while(n != 0){
        bit = n&1;
        ans = (bit * powr(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout<<"Binary form is: "<<ans<<endl;

    //ya allah finally onek chestar por korte parlam; pow function nia problem chilo;
    return 0;
}
