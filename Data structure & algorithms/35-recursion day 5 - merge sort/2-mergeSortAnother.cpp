#include<iostream>
using namespace std;

void print(int *arr, int n){
    cout << "Elements of the array: ";
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr, int s, int e){
    int mid = s + (e -s ) / 2;

    //get the length of both arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    //create array
    int *firstArr = new int[len1];
    int *secondArr = new int[len2];

    //copy the left sides array to the first array
    int k = s;
    for(int i = 0; i <= len1; i++){
        firstArr[i] = arr[k++];
    }

    //copy the right sided array to the second array
    k = mid + 1;
    for(int i = 0; i <= len2; i++){
        secondArr[i] = arr[k++];
    }

    //now merge the first and second index to the main array by using the "merge two sorted array" concepts;
}

void mergeSort(int *arr, int s, int e){
    //base case
    if(s >= e){
        return;
    }

    int mid = s + (e - s) / 2;

    //sort left array
    mergeSort(arr, s, mid);

    //sort right array
    mergeSort(arr, mid + 1, e);

    //now merge both arrays
    merge(arr, s, e);
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