#include<iostream>
using namespace std;

int main()
{
    int array[100];
    int size, sum = 0;

    cout<<"Enter the size of the array: ";
    cin>>size;

    for(int i = 0; i < size; i++){
        cin>>array[i];
        sum = sum + array[i];
    }

    cout<<"sum is: "<<sum<<endl;

    return 0;
}