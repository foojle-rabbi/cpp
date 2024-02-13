#include<iostream>
using namespace std;

class normalQueue{
    private:
    int *arr;
    int front;
    int rear;
    int size;

    public:
    //constructor: 
    normalQueue(int capacity) : size(capacity), arr(new int[size]), rear(-1), front(-1) {}

    bool empty(){
        return front == -1;
    }

    bool isFull(void){
        return rear == size -1;
    }

    void push(int val){
        if(isFull()){
            cout << "Queue is full can not push"<< endl;
            return;
        }

        if(front == -1){
            front = 0;
        }

        rear++;
        arr[rear] = val;
    }

    void pop(){
        if(empty()){
            cout << "Queue is empty nothing to pop" << endl;
            return;
        }

        front++;
    }

    int frontVal(){
        if(empty()){
            return -1;
        }

        return arr[front];
    }

    void display(void){
        if(empty() || front == size){
            cout << "There is no value for printing" << endl;
            return;
        }

        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }
};

class circularQueue{
    private:
    int *arr;
    int front;
    int rear;
    int size;

    public:
    circularQueue(int capacity) : size(capacity), arr(new int[size]), front(-1), rear(-1) {}

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(void){
        return ((rear+ 1) % size == front);
    }

    //this is a extra funtion for iterationg circualarly. just experimenting
    int iterateCir(int i){
        return (i + 1) % size;
    }

    void push(int val){
        if(isFull()){
            cout << "Queue is full can not push" << endl;
            return;
        }
        
        if(front == -1){
            front = 0;
        }

        rear = iterateCir(rear);
        arr[rear] = val;
    }

    void pop(void){
        if(isEmpty()){
            cout << "can not pop item: " << endl;
            return;
        }

        if(front == rear){
            front = rear = -1;
            return;
        }
        front = iterateCir(front);
    }

    int top(void){
        if(isEmpty()){
            return -1;
        }

        return arr[front];
    }

    void display(void){
        if(isEmpty()){
            cout << "Queue is empty!" << endl;
            return;
        }

        int i = front;
        cout << "Elements of queue: ";
        while(i != rear){
            cout << arr[i] << " ";
            i = iterateCir(i);
        }cout << arr[rear] << endl;
    }
};

class dequeue{
    private:
    int *arr;
    int front;
    int rear;
    int size;

    public:
    dequeue(int capacity) : size(capacity), arr(new int[size]), front(-1), rear(-1) {}

    //A other kinds of function. hah ha......
    int iterCir(int i){
        return (i + 1) % size;
    }
    bool isEmpty(){

    }

    bool isFull(){

    }

    void push_front(int val){

    }

    void push_back(int val){

    }

    void pop_front(){

    }

    void pop_back(){

    }

    int top(){

    }

    int last(){

    }

    void display(){

    }

};

int main()
{
    /*
        Etodin mane ei koyek din dhoira toh onek dhoroner queue korlam ar sathe opern board e dry korchi. ar motamuti prottekta opeartion e nije nije valo 
    kore bujhte chesta korchi. Ar ei function ba data structure gulate video khub kom e dekha hoiche. tar theke beshi nijer previous jei knowledge chilo
    oita kaaje lagaiya e ei gula code korchi. jeta kina nijer kache mone hoiteche onek kajer diche. Jaak ja houar hoiche. ekhon niche queeur shob gula 
    type code korte hoibo:

    --> types of queue: 
        -> normal queue
        -> circular queue
        -> double endeded queue
        -> input restricted queue
        -> output restricted queue //jodio ei 2 types er queue special queue. ekhon eigualr code na korleo hoibo. pore dokar porle nijer moto kore implement korte
                                    parbo.


    --> normal queue operations:
        1. push
        2. pop
        3. frontVal
        4. isFull
        5. isEmpty
        6. display

    --> circualr queue operations(its as like the normal queue but array will be act like circular no space will be wasted):
        1. push
        2. pop
        3. frontVal
        4. isFull
        5. isEmpty
        6. display

    
    */
    //------------- normal queue -------------------
    normalQueue nq(5);

    nq.pop();
    cout << nq.frontVal() << endl;
    nq.push(1);
    nq.push(2);
    nq.push(3);
    nq.push(4);
    nq.push(5);
    nq.push(5);
    nq.display();


    cout << nq.frontVal() << endl;
    nq.pop();
    cout << nq.frontVal() << endl;
    nq.display();

    nq.push(54);
    nq.pop();
    nq.pop();
    nq.pop();
    nq.display();
    cout << nq.frontVal() << endl;
    nq.pop();
    nq.display();


    //--------------- circualr queue ------------
    cout << "------------------ Circualr queue: -------------------" << endl;
    circularQueue cq(5);

    // for(int i = 0; i < 20; i++){
    //     cout << cq.iterateCir(i) << " ";
    // }

    cq.display();
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.display();

    cout << "Top element is: " << cq.top() << endl;
    cq.pop();
    cq.display();

    cq.pop();
    cq.push(12);
    cq.push(23);
    cq.push(52);
    cq.pop();
    cq.push(73);
    cq.push(98);
    cq.display();


    //-------- Double ended Queue -----------------
    

    //suppose i want to create all types of queue with different types of operation but at the start all of queue has one thing common and that the variable and
    // the data. now my question is"can I inherit those variable and use them on my all of types of queue class?"

    return 0;
}