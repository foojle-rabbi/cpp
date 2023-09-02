#include<iostream>
using namespace std;

int searchPos(int arr[], int n, int target){
    int left = 0;
    int right = n;
    int mid;

    while(left <= right){
        mid = (left + right) / 2;
        if(arr[mid] <= target){
            left = mid + 1;            
        }else{
            right = mid - 1;
        }
    }
    return left;
}

int main()
{
    int nums[] = {1,3,5,6};
    cout<<searchPos(nums, 7, 5);
    return 0;
}