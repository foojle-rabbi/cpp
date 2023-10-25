#include<iostream>
using namespace std;

bool isPresent(int *arr, int size, int key){
    //base case
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }else{
        return isPresent(arr + 1, size - 1, key); // eikhane ki amar return statement dite hobe naki hobe na? dile ki hobe ar na dile ki hobe?
    }
}

int main()
{
    int arr[5] = {2, 5, 9, 3, 10};
    int size = 5;
    int key = 10;

    if(isPresent(arr, size, key)){
        cout << "Key is present" << endl;
    }else{
        cout << "key is not present" << endl;
    }
    return 0;
}