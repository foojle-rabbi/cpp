#include<iostream>
using namespace std;

void display(int arr[], int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int *arr, int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && temp < arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp; //karon jodi while loop er vote gia kono index er value re shift kore taile eita abar oi temp value re 
                            //tar main jaygay nia jaibo;
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