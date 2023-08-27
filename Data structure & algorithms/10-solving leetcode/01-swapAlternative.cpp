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

int main()
{
    int arr[5] = {1, 2, 7, 8, 5};
    swapAlter(arr, 5);
    display(arr, 5);
    return 0;
}