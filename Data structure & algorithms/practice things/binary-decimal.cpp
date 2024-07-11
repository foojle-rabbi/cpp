#include<iostream>
#include<math.h>
using namespace std;

int exponent(int n){
    if(n == 0){
        return 1;
    }

    int ans = 1;
    for(int i = 1; i <= n; i++){
        // cout << "Loop e dhokar por ans er value: " << ans << endl;
        ans = ans * 2;
    }
    return ans;
}

int main()
{
    while (true)
    {
        int number, i, decimal;
        i = decimal = 0;

        cout << "Enter the binary number: ";
        cin >> number;

        while (number != 0)
        {
            if(number % 10 == 1){
                decimal = decimal + exponent(i);
                }
            i++;
            number = number / 10;
        }

        cout << "Decimal is: " << decimal << endl;
    }
    
    return 0;
}
