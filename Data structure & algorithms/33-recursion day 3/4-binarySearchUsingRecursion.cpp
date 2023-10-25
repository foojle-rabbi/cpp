#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){
    //base case
    if(s > e){
        return false;
    }

    int mid = (s + e) / 2;

    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid] < key){
        return binarySearch(arr, mid + 1, e, key);
    }
    else{
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[5] = {2, 4, 5, 7, 10};
    int size = 5;
    int key = -10;

    if(binarySearch(arr, 0, size - 1, key)){
        cout << "Elemnet is found" << endl;
    }else{
        cout << "element is not found" << endl;
    }
    return 0;
}


lecture 12 - 15 shob gula question solve using recursion