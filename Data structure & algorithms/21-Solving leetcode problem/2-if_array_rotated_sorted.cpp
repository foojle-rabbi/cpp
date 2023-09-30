#include<iostream>
using namespace std;

bool sortedRotated(int *arr, int n){
    int count = 0; 
    for(int i = 1; i<n; i++){
        if(arr[i - 1] > arr[i]){
            count++;
            cout<<"Entered"<<endl;
        }
    }
    if(arr[0] < arr[n -1]){
        count++;
    }
    cout<<count<<endl<<endl;
    return count<=1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<sortedRotated(arr, size)<<endl;
    return 0;
}