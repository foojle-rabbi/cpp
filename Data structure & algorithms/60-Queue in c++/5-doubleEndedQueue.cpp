#include<iostream>
using namespace std;

class queue{
    private:
    int *arr;
    int front;
    int rear;
    int size;

    public:
    // constructor 
    queue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool empty(void){
        return front == -1;
    }

    void push_front(int val){
        if((rear + 1) % size == front){
            cout << "Queue is full can not push_front item: " << val << endl;
            return;
        }

        if(front == -1){
            front = 0;
        }

        rear = (rear + 1) % size;
        arr[rear] = val;
    }

    void display(void){
        if(front == -1){
            cout << "There is no value for printing" << endl;
            return;
        }

        int i = front;

        cout << "Elements of queue: ";
        while(i != rear){
            cout << arr[i] << " ";
            i = (i + 1) % size;
        }cout << arr[rear] << endl;
    }

    void push_back(int val){
        if((rear + 1) % size == front){
            cout << "Queue is full can not push_back item: " << val << endl;
            return;
        }

        if(front == -1){
            front = 0;
            rear = 0;
        }else if(front == 0){
            front = size - 1;
            cout << "seted front into : " << front << endl;
        }else{
            front--;
        }
        arr[front] = val;
    }

    void front_rear(void){
        cout << "front index is: " << front << endl << "rear index is : " << rear << endl;
    }

    void pop_back(void){
        int val;
        if(front == -1){
            cout << "There is not value for popping_back" << endl;
            return;
        }else if(front == rear){
            val = arr[front];
            front = rear = -1;
            return;
        }else{
            val = arr[front];
            front = (front + 1) % size;
        }
    }

    void pop_front(void){
        if(front == -1){
            cout << "There is not value for popping_front" << endl;
            return;
        }

        int val = arr[rear];    

        if(front == rear){
            front = rear = -1;
        }else if(rear == 0){
            rear = size -1;
        }else{
        rear--;
        }
        cout << "--------------pop front item: " << val << endl;
        return;
    }


};

int main()
{
    /*
    Operations are same like normal queue. but with some extra operations like:
        1. push_back()
        2. push_front()

        3. pop_front()
        4. pop_back()
    */

    queue q(5);
    q.display();
    q.front_rear();

    q.push_front(5);
    q.display();
    q.front_rear();

    q.push_front(10);
    q.display();
    q.front_rear();

    q.push_front(15);
    q.display();
    q.front_rear();

    q.push_back(3);
    q.display();
    q.front_rear();

    q.push_front(2);
    q.display();
    q.front_rear();

    q.push_back(56);
    q.push_front(66);

    q.pop_back();
    q.display();
    q.front_rear();

    q.pop_back();
    q.display();
    q.front_rear();

    q.pop_back();
    q.display();
    q.front_rear();

    q.pop_back();
    q.display();
    q.front_rear();

    q.pop_back();
    q.display();
    q.front_rear();

    q.push_front(67);
    q.display();
    q.front_rear();

    q.pop_back();
    q.display();
    q.front_rear();
    /*
    You may be wondering why was i printing the vlaues of involing the function like this. the reason for invoking the functions was
    to dry run and understand what is going on behind the scene. and then find the problem and then solve that. You know what this method
    is pretty helful for me. Casue I can find the problem of my own and then solve that particular problem with my own previous knowledge
    and you know one more thing that most of the time I can solve. 

    which gives me a lot of presure and motivats me for moving forward and learnd others stuffs also.

    But is these so that easy is simple? Aaaaaaaaaah....... i would that NO! they are not so simple and plesuring sometime i hardly find any
    soulution for some problem and could not build the logic to solve that problem. That is so overwlming. but all of that its pretty journeyr moto.
    */

    q.push_back(4);
    q.push_back(53);
    q.push_back(3);
    q.display();
    q.front_rear();

    q.pop_front();
    q.display();
    q.front_rear();

    q.pop_front();
    q.display();
    q.front_rear();

    q.pop_front();
    q.display();
    q.front_rear();
    return 0;
}