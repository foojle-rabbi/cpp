#include<iostream>
using namespace std;

void print(int *arr, int n){
    cout << "Elements of the array: ";
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main()
{
    int arr[] = {5, 2, 9, 12, -1, 0};
    int size = sizeof(arr) / sizeof(int);
    return 0;
}