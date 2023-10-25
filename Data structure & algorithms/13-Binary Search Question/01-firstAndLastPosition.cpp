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

int main()
{
    /*
    Problem: first and last position of an element in a sorted array;
    explanation: tomar kache ekta sorted array deoya thakbe ebong tomake ekta number diye oi number er first index and last
    index koto? 
    suppose [1, 2, 3, 3, 3, 5]; ekhon tomake bola bolo holo 3; tar mane 3 er first occourance 2 and 4; that is the answare;

    eitao easy e; jehetu binary search shomporke jani tai khub easyly e eita ber kora jabe; tobe aage eitake 2 part e vag
    kora jak; mane aage ber korbo first occourance and then last occourence;
    */

    int arr[6] = {1, 2, 3, 3, 3, 5};
    int size = 5;

    cout<<"first occourence : "<<firstOccourance(arr, size, 3)<<endl;
    cout<<"last occourence : "<<lastOccourance(arr, size, 3)<<endl;

    return 0;
}