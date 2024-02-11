
#include<iostream>
using namespace std;

class queue{
    private:
    int *arr;
    int rear;
    int front;
    int size;

    public:
    //constructor
    queue(int n){
        size = n;
        arr = new int[size];
        rear = -1;
        front = -1;
        cout << "size of array: " << sizeof(arr) << endl;
    }

    void enqueue(int val){
        //check if the array if full
        if((rear + 1) % size == front){
            cout << "Queue is full" << endl;
            return;
        }
        if(front == -1){
            front = 0;
        }

        rear = (rear + 1) % size;
        arr[rear] = val;
    }

    void dequeue(void){
        if(front == -1){
            return;
        }

        if(front == rear){
            front = rear = -1;
        }

        front = (front + 1) % size;
    }

    int display(void){
        int i = front;

        cout << "Elements of queue: ";
        while(i != rear){
            cout << arr[i] << " ";
            i = (i + 1) % size;
        }cout << arr[rear];
        cout << endl;
    }
};

int main()
{
    queue q(4);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(30);

    q.display();
    return 0;
}