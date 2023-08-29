#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int left = 0;
    int right = n -1;
    while(left <= right){
        int mid = left + (right - left) /2;
        // int mid = (left + right) /2;
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

int main()
{
    int arr[5] = {-25, -12, -1, 0, 1};
    int size = 5;

    cout<<"Value exits at index: "<<binarySearch(arr, size, -12)<<endl;
    return 0;
}