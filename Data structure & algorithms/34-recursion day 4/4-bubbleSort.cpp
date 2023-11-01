#include<iostream>
using namespace std;

void print(int *arr, int n){
    cout << "Elements of the array: ";
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n){
    //base case
    print(arr, n);
    if(n == 0){
        return;
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}

int main()
{
    //there is only one rule and that is solve one case the remaining will solve automatically
    int arr[] = {2, 0, -2, -5, 3, -12, -110, -149, 12, 0, 23, -332};
    int size = sizeof(arr) / sizeof(int);

    // print(arr, size);
    bubbleSort(arr, size - 1);
    cout << "sorted array: " << endl;
    print(arr, size - 1);
    return 0;
}