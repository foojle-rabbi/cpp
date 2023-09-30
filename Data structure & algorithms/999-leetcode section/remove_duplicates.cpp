#include<iostream>
using namespace std;

 int removeDuplicates(int nums[], int n) {
        int j = 0;
        for(int i = 0; i <n; i++){
            if(nums[i] == nums[i + 1]){
                continue;
            }
            j++;
        }
    return j;
}

int main()
{
    int arr[] = {1, 2,2, 2,3, 3, 4};
    cout<<removeDuplicates(arr, 7)<<endl;
    return 0;
}

//if it works i will be obak keno na ami toh just khali vaiba chinta ekta solution bahir koira dilam;