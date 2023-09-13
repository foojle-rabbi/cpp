#include<iostream>
using namespace std;

void display(int *arr, int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotateArray(int *arr, int n, int k){
    int temp[n];
    for(int i = 0; i < n; i++){
        temp[(i + k) % n] = arr[i];  
    }
    
    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }
}

int main()
{
    /*
    rotate array menas kono ekta array ke rotate kora ekhon bolte paro rotate mane ki? nice question rotate mane hoiteche gurano, accha 
    kemone ghurano? okay example dia bujaitechi: jemon amar kache array arche [1, 2, 5, 6] ekoon ami ere ekbar guramu mane tokhon amar 
    array hobe [6, 1, 2, 5] mane ami khali prottekta value re ekta index kore aage shift korchi ekhon 6 re ekbar aage shift korle to array 
    er bahire choila jay. kntu sheta na kore tare abar pichon dik dia nia aschi;

    Ekhon eita toh amra khub easily 
    */

    int arr[] = {1, 2, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k = 2;
    display(arr, size);
    rotateArray(arr, size, k);
    display(arr, size);
    return 0;
}