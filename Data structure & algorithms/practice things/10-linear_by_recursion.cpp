#include<iostream>
using namespace std;

bool getKey(int *arr, int size, int key){
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }else{
        return getKey(arr + 1, size-1, key);
    }
}

int main()
{
    int arr[] = {3, 5, 1, 2, 6};

    bool ans = getKey(arr, 5, 1);

    if(ans){
        cout << "key is found" << endl;
    }else{
        cout << "key is not found" << endl;
    }
    return 0;
}