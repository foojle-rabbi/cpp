#include<iostream>
using namespace std;

int sumOfArray(int *arr, int size){
    //base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int ans = arr[0] + sumOfArray(arr + 1, size -1);
    return ans;
}

int main()
{
    int arr[5] = {1, 1, 7, 8, 10};
    int size = 5;

    cout << "sum of array is: " << sumOfArray(arr, size) << endl;
    return 0;
}