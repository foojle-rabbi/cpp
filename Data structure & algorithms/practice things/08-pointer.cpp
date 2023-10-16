#include<iostream>
using namespace std;

int main()
{
    /*
    int i;
    i = 5;

    // char ch = 'c';
    /*
    cout<<&i<<endl;
    int *ptr = &i;
    int temp = i;

    cout<<"value of p " << ptr <<endl;
    cout<<*(ptr)<<endl;
    *(ptr) += 5;
    cout<<*(ptr)<<endl;

    cout<<"Address of ptr: "<<&ptr<<endl;
    cout<<i<<endl;
    cout<<"Temp value: "<<temp<<endl;

    char ch = 'z';
    char *ptr = &ch;
    cout<<ptr;

    char character = 'y';
    ptr = &character;
    cout<<ptr;
    */

    int arr[5];
    cout<<"Enter 5 array value: ";
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < 5; i++){
        if(arr[i] < 0){
            arr[i] = 100;
        }
    }

    cout<<"modified array: ";
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}