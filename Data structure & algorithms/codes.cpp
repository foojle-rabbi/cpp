#include<iostream>
using namespace std;

void display(int *arr, int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 8};
    int *temp = arr;
    
    display(temp, 6);
    return 0;
}