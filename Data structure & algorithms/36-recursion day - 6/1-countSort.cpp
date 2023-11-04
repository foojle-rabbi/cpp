#include<iostream>
using namespace std;

void print(int *arr, int n){
    cout << "Elements of the array: ";
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int getRightIndex(int *arr, int s, int e){
    int pivot = arr[s];

    int count = 0;
    for(int i = s + 1; i <= e; i++){
        if(pivot >= arr[i]){
            count++;
        }
    }

    int rightIndex = s + count;
    swap(arr[s], arr[rightIndex]);

    int i = s; 
    int j = e;

    while(i < rightIndex && j > rightIndex){
        while(arr[i] < arr[rightIndex]){
            i++;
        }

        while(arr[j] > arr[rightIndex]){
            j--;
        }

        while(i < rightIndex && j > rightIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return rightIndex;
}

void countSort(int *arr, int start, int end){
    //base case 
    //condition
    if(start >= end){
        return;
    }
    
    int p = getRightIndex(arr, start, end);

    //sort the left part of the array
    countSort(arr, start, p - 1);

    //sort the right part of the array
    countSort(arr, p + 1, end);
}

int main()
{
    int arr[] = {90, 20, 8, 2, -7, 23, 12, 5, 9};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size - 1);
    countSort(arr, 0, size -1);
    print(arr, size-1);
    return 0;
}