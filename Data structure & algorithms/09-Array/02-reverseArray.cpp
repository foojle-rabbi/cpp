#include<iostream>
using namespace std;

void reverse1(int arr[], int n){
    int first, last, temp;
    for(int i = 0; i < n /2; i++){
        temp = arr[n-i-1];
        arr[n-i-1] = arr[i];
        arr[i] = temp;
    }
}

void reverse2(int *arr, int n){
    int i = 0;
    int j = n-1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++; j--;
    }
}

void display(int *arr, int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    /*
    Accha ami toh er aage array reverse korar ekta program dekhchilam; oita to valoi chilo casue oita n/2 porjonto jaito ar
    first and last index er value gulare swap koira dito; oita o cholche;

    jaak eto pera nia lav nai; 2 types er e reverse shkikha hoiche; ar second je method oitare "2 pointer" approch bole; jinish
    ta shei;
    */
    
    int arr[] = {1, 2, 3, 4, 5};
    display(arr, 5);
    reverse2(arr, 5);
    display(arr, 5);

    return 0;
}