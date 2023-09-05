#include<iostream>
using namespace std;

void display(int arr[], int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {2, 5, 1, 0, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);
    display(arr, size);
    return 0;
}