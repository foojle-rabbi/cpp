#include<iostream>
using namespace std;

int main()
{
    int count, i, number, binary[100];

    while (true)
    {
        cout << "Enter the number: ";
        cin >> number;

        i = 0, count = 0;
        while(number != 0){
            if(number % 2 == 0){
                binary[i] = 0;
                i++;
            }else{
                binary[i] = 1;
                i++;
            }

            count++;
            number = number / 2;
        }

        cout << "binary number is : ";
        for(int i = count-1; i >= 0; i--){
            cout << binary[i] << " ";
        }cout << endl;
    }
    return 0;
}