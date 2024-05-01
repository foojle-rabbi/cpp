#include<iostream>
using namespace std;

void print(int *arr, int size){
    cout << "Elements of array: ";
    for(int i = 1; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void heapify(int *arr, int size, int index){
    int largest = index;
    int left = 2 * index;
    int right = (2 * index) + 1;

    if(left < size && arr[left] > arr[largest]){
        largest = left;
    }else if(right < size && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[largest], arr[index]);
        
        heapify(arr, size, largest);
    }
}

int main()
{
    //kono ekta array theke heap build korar function er name e hocche amar heapify
    int arr[] = {-1, 5, 32, 52, 39, 85};
    int size = 6;
    print(arr, size);

    for(int i = (size / 2) -1; i > 0; i--){
        heapify(arr, size, i);
    }
    print(arr, size);
    return 0;
}

// dont know why this isnt working. asked gpt and bard but 