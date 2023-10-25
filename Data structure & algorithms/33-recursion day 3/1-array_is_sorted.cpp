#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    // base case
    if(size == 0 || size == 1){
        return true;
    }

    // if(arr[0] > arr[1]){
    //     return false;
    // }else{
    //     return isSorted(arr + 1, size -1);
    // }

    //both conditions are the same

    if(arr[0] <= arr[1]){
        return isSorted(arr + 1, size - 1);
    }else{
        return false;
    }
}

int main()
{
    int arr[5] = {1, 1, 7, 8, 10};
    int size = 5;

    if(isSorted(arr, size)){
        cout << "array is sorted" << endl;
    }else{
        cout << "array is not sorted" << endl;
    }
    return 0;
}