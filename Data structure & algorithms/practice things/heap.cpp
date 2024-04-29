#include<iostream>
using namespace std;

class maxHeap{
    public:
    int arr[100];
    //acch ener ei size ta hocche amar maxHeap er size
    int size;

    //constructor
    maxHeap(){
        arr[0] = -1;
        size = 0;
    }

    //insertion
    void insert(int val){
        size++;
        arr[size] = val;

        int index = size;

        while(index > 1){
            int parent = index / 2;

            if(arr[index] > arr[parent]){
                swap(arr[index], arr[parent]);
                index = parent;
            }else{
                return;
            }
        }
    }

    //delation
    void deletion(void){
        if(size == 0){
            cout << "Max heap is empty" << endl;
            return;
        }

        //step 1 and 2: 
        arr[1] = arr[size];
        size--;

        int index = 1;
        while(index < size){
            int left = 2 * index;
            int right = (2 * index)  + 1;

            if(left < size && arr[index] < arr[left]){
                swap(arr[left], arr[index]);
                index = left;
            }else if(right  < size && arr[index] < arr[right]){
                swap(arr[right], arr[index]);
                index = right;
            }else{
                return;
            }
        }

    }


    //print function    
    void display(void){
        if(size == 0){
            cout << "maxHeap is empty" << endl;
            return;
        }
        cout << "Elements of maxHeap: ";
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

//min heap
class minHeap{
    
};

int main()
{
    maxHeap mh;
    mh.display();
    mh.insert(50);
    mh.insert(40);
    mh.insert(20);
    mh.insert(55);
    mh.insert(30);
    mh.insert(60);
    mh.insert(45);
    mh.display();

    mh.deletion();
    mh.display();
    
    mh.deletion();
    mh.display();
    return 0;
}