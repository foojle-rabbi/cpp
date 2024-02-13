#include<iostream>
using namespace std;

class queue{
    private:
    int *arr;
    int front;
    int rear;
    int size;

    public:
    //constructor
    queue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool empty(void){
        return front == -1;
    }

    void enqueue(int val){
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
            cout << "Queue is empty" << endl;
            return;
        }

        if(rear == front){
            rear = front = -1;
        }

        front = (front + 1) % size;
    }

    void display(void){
        if(front == -1){
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Elements of queue: ";
        int i = front;
        
        while(i != rear){
            cout << arr[i] << " ";
            i = (i + 1) % size;
        }cout << arr[rear] << endl;
    }

    int rearVal(void){
        if(front == -1){
            return -1;
        }

        return arr[rear];
    }
};

int main()
{
    /*
    Circular queue Operations:
        1. enqueue
        2. dequeue
        3. empty
        4. rearElement
        5. size
    */

    queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    cout << q.rearVal() << endl;
    return 0;
}