#include<iostream>
using namespace std;

int firstOccourance(int arr[], int n, int key){
    int left = 0;
    int right = n -1;
    int ans = -1;
    while(left <= right){
        int mid = left + (right - left)/2 ;
        if(arr[mid] == key){
            ans = mid;
            right = mid - 1;
        }else if(arr[mid] > key){
            right = mid -1;
        }else{
            left = mid + 1;
        }
    }
    return ans;
}

int lastOccourance(int arr[], int n, int key){
    int left = 0;
    int right = n -1;
    int ans = -1;

    while(left <= right){
        int mid = left + (right - left)/2 ;
        if(arr[mid] == key){
            ans = mid;
            left = mid + 1;
        }else if(arr[mid] > key){
            right = mid -1;
        }else{
            left = mid + 1;
        }
    }
    return ans;
}

int totalOccourance(int arr[], int n, int key){
    int first = firstOccourance(arr, n, key);
    int last = lastOccourance(arr, n, key);
    
    return (last - first) + 1;
}

int main()
{
    /*
    Problem: Find the total number of occaourance of a number;

    jakk pera nai etao oi ager tar motoi easy; just first occourance and then last occourance ber kore formula apply korlei
    kon number koto bar ache ta ber kora jaibo; its easy peasy;
    */

    int arr[6] = {1, 2, 3, 3, 3, 5};
    int size = 5;

    cout<<"Total number of occourance of value 3 is : "<<totalOccourance(arr, size, 5)<<endl;

    return 0;
}