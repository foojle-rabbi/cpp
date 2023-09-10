#include<iostream>
using namespace std;

void display(int *arr, int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int *arr, int n){
    int left = 0;
    int right = n -1;

    while(left < right){
        swap(arr[left++], arr[right--]);
    }
}

int main()
{
    int arr[] = {2, 5, 8, 12, 4};
    int size = sizeof(arr) / sizeof(int);

    display(arr, size);
    reverse(arr, size);
    display(arr, size);
    return 0;
}