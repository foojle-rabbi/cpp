#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int s = 0;
    int e = n -1;
    int ans = -1;
    while(s < e){
        int mid = s + (e - s) /2;
        if(arr[mid] > arr[e]){
            s = mid + 1;
            ans = s;
        }else{
            e = mid;
        }
    }
    return ans;
}

int search(int arr[], int first, int last, int target){
    int s = first;
    int e = last -1;

    while(s <= e){
        int mid = s + (e - s) /2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] > target){
            e = mid -1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}

int searchValue(int arr[], int n, int target){
    int pivot = findPivot(arr, n);
    
    if(target >= arr[pivot] && target <= arr[n-1]){
        return search(arr, pivot, n, target);
    }else{
        return search(arr, 0, pivot, target);
    }
}   

int main()
{
    /*
    Problem: search in a rotated array;
    problem ta holo gia tomare ekta sorted array deoya thakbe but array ta hobe rotated jemon arr [1, 2, 3, 5, 7, 9] ache emon
    but hobe [7, 9, 1, 2, 3, 5] ekhon tomare ekta value dibe tmi oitar index return kore dibe;

    ans: accha tumi jodi linear search maro taile khub easily index return korte parba; kintu sheitar time complexity hobe 
    big O(n); jodi logarithm time e korte chao taile linear seach marte hobe; so linear search kemone mara jay? jay tobe tar
    jonno aage graph nia dry run koro; oikhane 2 ta line create hobe; tarpor oikahen arr[pivot] <= target && target >= arr[n-1]
    jodi eitar moddhe hoy taile eikahen linear seach marba ar jodi na hoy taile first line marba; taile bujha jaiteche toamre
    aage pivot ber korte hboe;
    */

    int arr[] = {7, 9, 1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 87;

    cout<<"Value exists at index : "<<searchValue(arr, size, target) <<endl;
    return 0;
}