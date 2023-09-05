#include<iostream>
using namespace std;

void display(int arr[], int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *arr, int n){
    for(int i = 0; i < n - 1; i ++){
        display(arr, n);
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1])
            swap(arr[j], arr[j+1]);
        }
    }
}

int main()
{
    int arr[] = {2, 5, 1, 0, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);
    return 0;
}