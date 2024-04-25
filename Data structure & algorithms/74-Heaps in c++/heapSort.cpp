#include<iostream>
using namespace std;

/*
heapsort steps: 
step 1: swap arr[1] with arr[last index];
step 2: size--;
step 3: apply hepify function for first index; that you have swapped;
*/

void heapify(int *arr, int size, int index){
    int highestVal = index;
    int leftIndex = 2 * index;
    int rightIndex = (2 * index) + 1;

    //check koro je amar left index bound er moddhe ache kina. ar eitar value ki higest val theke boro kina
    if(leftIndex <= size && arr[leftIndex] > arr[index])
    {
        //jodi boro hoy tahole index change koro 
        highestVal = leftIndex;
    }
    //same vabe right child er value o check koro je boro kina
    else if(rightIndex <= size && arr[rightIndex] > arr[index])
    {
        //jodi boro hoy taile index change koro
        highestVal = rightIndex;
    }

    //dekho je index change hoiche kina?
    if(highestVal != index)
    {   
        //jodi highest val er index change hoy taile eikhane enter korbe. ar enter korlei value gula swap koro. 
        swap(arr[index], arr[highestVal]);
        //ekhon uporer ei ekbar function chola dia ekta highest value re tar nijer jaygay nilam. ekhon pura tree te tar shothik
        //jaygate set korar jonno abar heapify function re call korte hoilo. 
        heapify(arr, size, highestVal);
    }
}

void heapSort(int *arr, int n){
    int size = n;
    // step 1: 
    // swap(arr[1], arr[size]);
    arr[1] = arr[size];
    size--;

    // step 2
    heapify(arr, size, 1);
}

int main()
{
    /*
    Heap sort o ahamori hard kichu na. heap sort er complexity hocche tomar O(nlogn)
    steps of creating heap sort. if you have only given a random array.

    random array --> create max heap -> max heap banao heapify function use kore --> then heap sort er logic jeita kina matro 2 ta step 
    seta follow koro. --> heap sort e o heapify function apply koro. 
    */

    int arr[] = {-1, 23, 54, 12, 87, 45, 32};
    int size = 6;

    for(int i = size/2 ; i > 0; i--){
        heapify(arr, size, i);
    }

    cout << "Heap value: ";
    for(int i = 1; i < size; i++){
        cout << arr[i] << " ";
    }cout << endl;

    //--------------------------------------------

    cout << "Heap value after sorting: " ;
    heapSort(arr, size-1);
    for(int i = 1; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

/*
Jani na keno but the heap sort function is not working. will have to solve it later. 
dont know why this thing is not working. I should ask it to gpt. 
*/