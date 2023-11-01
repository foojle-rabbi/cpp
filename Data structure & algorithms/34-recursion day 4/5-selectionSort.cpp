#include<iostream>
using namespace std;

void print(int *arr, int n){
    cout << "Elements of the array: ";
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int *arr, int n){
    //base case
    if(n == 0){
        return;
    }

    int min_index = 0;
    for(int i = 0; i <=n; i++){
        if(arr[min_index] > arr[i]){
            min_index = i;
        }
    }

    if(min_index != 0){
        swap(arr[0], arr[min_index]);
    }

    selectionSort(arr + 1, n-1);
}

int main()
{
     int arr[] = {-88,5,8,34,0,23,-78,};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size-1);
    selectionSort(arr, size- 1);
    print(arr, size-1);
    return 0;
}