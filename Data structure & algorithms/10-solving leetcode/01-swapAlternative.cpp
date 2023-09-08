#include<iostream>
using namespace std;

void display(int arr[], int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlter(int arr[], int n){
    for(int i = 0; i <n; i = i+ 2){
        if(i + 1 < n){
            swap(arr[i], arr[i + 1]);
        }
    }
}

/*
Problem: swap alter;
explanation: swap alter problem ta holo je tomare ekta array deoya thakbe oikahn theke tumi 2 ta 2 ta element re swap korba;
mane tomare jodi deoya thake 1 2 5 9 tumi eitare banaiba 2 1 9 5. asha kori bujhte parcho;
*/

int main()
{
    int arr[5] = {1, 2, 7, 8, 5};
    swapAlter(arr, 5);
    display(arr, 5);
    return 0;
}