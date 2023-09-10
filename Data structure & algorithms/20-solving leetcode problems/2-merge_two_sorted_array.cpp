#include<iostream>
using namespace std;

void display(int *arr, int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int *arr1, int n, int *arr2, int m, int *last){
    int i, j, k;
    i = j = k = 0;

    while(i <= n && j <= m){
        if(arr1[i] < arr2[j]){
            last[k++] = arr1[i++];
        }else{
            last[k++] = arr2[j++];
        }
    }

    while(i <= n){
        last[k++] = arr1[i++];
    }

    while(j <= m){
        last[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[] = {1, 5, 8, 12};
    int arr2[] = {2, 9, 19, 25, 31};

    int arr[100];
    merge(arr1, 4, arr2, 5, arr);
    display(arr1, 4);
    display(arr2, 5);
    display(arr, 9);
    return 0;
}