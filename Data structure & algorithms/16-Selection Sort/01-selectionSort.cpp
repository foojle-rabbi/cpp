#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int minIndex;
    for(int i = 0; i < n; i++){
        minIndex = i;
        for(int j = i; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
            if(minIndex != i){
                swap(arr[minIndex], arr[i]);
            }
        }
    }
}

void display(int arr[], int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1, -2, 5, 32, 57, 96, 23, -10, 5, 9, 0, 214, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);
    selectionSort(arr, size);
    display(arr, size);
    return 0;
}