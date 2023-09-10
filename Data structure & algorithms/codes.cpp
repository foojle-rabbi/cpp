#include<iostream>
#include<set>
using namespace std;

int findDuplicate(int *arr, int n){
    set<int> s;
    
}

int main()
{
    int arr[] = {1, 2, 4, 5, 2, 9, 3};
    int size = sizeof(arr) / sizeof(int);

    cout<<findDuplicate(arr, size)<<endl;
    return 0;
}