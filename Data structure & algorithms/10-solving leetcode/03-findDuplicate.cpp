#include<iostream>
#include<algorithm>
using namespace std;

int duplicate(int arr[], int n){
    int i = 0;
    sort(arr, arr + n);
    while(i < n -1){
        if(arr[i] == arr[i + 1]){
            return arr[i];
        }
        i++;
    }
    return -1;
}

int main()
{
    int arr[5] = {3,1,3,4,2};
    cout<<"Duplicate number is: "<<duplicate(arr, 5)<<endl;
    return 0;
}

/*
Unfortunately this code is not the optimized solution; :(
*/