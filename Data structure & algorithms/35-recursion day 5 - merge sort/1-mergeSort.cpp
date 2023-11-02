#include<iostream>
using namespace std;

void print(int *arr, int n){
    cout << "Elements of the array: ";
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr, int start, int mid, int end){
    int i, j, k;
    i = k = start;
    j = mid + 1;
    int temp[100];

    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while(i <= mid){
        temp[k] = arr[i];
            k++;
            i++;
    }

    while(j <= end){
        temp[k] = arr[j];
            k++;
            j++;
    }

    for(int i = start; i <= end; i++){
        arr[i] = temp[i];
    }
}

void mergeSort(int *arr, int start, int end){
    if(start < end){
        int mid = (start + end) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[] = {5, 2, 9, 12, -1, 0};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size-1);
    mergeSort(arr, 0, size -1);
    print(arr, size - 1);
    return 0;
}