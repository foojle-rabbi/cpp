#include<iostream>
using namespace std;

void display(int arr[], int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){  
    int minIndex;
    for(int i = 0; i < n -1; i++){
        display(arr, n);
        minIndex = i;
        for(int j = i; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(arr[minIndex], arr[i]);
        }
    }
}

int main()
{
    int arr[] = {2, 5, 1, 0, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);
    display(arr, size);
    return 0;
}
