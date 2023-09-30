#include<iostream>
#include<vector>
using namespace std;

int searchInsert(int nums[], int n, int target) {
    int left = 0;
    int right = n - 1;

    int ans = 0;

    while(left <= right){
        int mid = (left + right) / 2;
        if(target == nums[mid]){
            return mid;
        }else if(nums[mid] < target){
            left = mid + 1;
            ans = left;
        }else{
            right = mid -1;
            // ans = right;
        }
    }
    // cout<<left<<endl;
    return ans;
}

int main()
{
    int nums[] = {2,5,7,8};

    while(1){
        int n;
        cin>>n;
        cout<<searchInsert(nums, 4, n)<<endl;
    }
    return 0;
}