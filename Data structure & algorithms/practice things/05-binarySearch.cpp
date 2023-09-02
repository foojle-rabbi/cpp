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
    int arr[10] = {2,7,8,10,11,16,20,34,67,88};

    sort(arr[0], arr[10]); 

    display(arr, 10);
    cout<<binarySearch(arr, 10, 2)<<endl;
    return 0;
}