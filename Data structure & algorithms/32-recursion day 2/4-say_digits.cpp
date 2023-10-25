#include<iostream>
using namespace std;

void sayDigits(int n, string *arr){
    //base case
    if(n == 0){
        return;
    }


    //recursive call
    sayDigits(n / 10, arr);

        //proccessing
    int r = n % 10;
    cout << arr[r] << " ";
}

int main()
{
    int n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six",
                    "seven", "eight", "nine"};

    cout << "Enter a number: ";
    cin >> n;

    sayDigits(n, arr);
    return 0;
}