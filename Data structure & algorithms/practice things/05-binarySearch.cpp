#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = (left + right) /2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            right = mid -1;
        }else{
            
            left = mid + 1;
        }
    }
    return -1;
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
    int arr[] = {22,7,83,101,11,136,20,34, -64, 372, -02, 82,67,88};

    int size = sizeof(arr) / sizeof(int);

    // sort(arr[0], arr[size]) //wrong way below is the correct way of sorting an array;

    display(arr, size);
    sort(arr, arr + size); // now i understand how to sort an array using stl algorithms/functions;
    display(arr, size);
    // cout<<binarySearch(arr, 10, 2)<<endl;
    return 0;
}