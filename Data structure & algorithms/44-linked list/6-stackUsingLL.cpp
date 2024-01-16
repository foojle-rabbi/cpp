/*
#include<iostream>
using namespace std;

#define MAX 10

class Stack{
    private:
    int data[MAX];
    int top;

    public:
    Stack(){
        top = -1;
    }

    bool isFull(){
        if(top == MAX){
            return true;
        }else{
            return false;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    void push(int val){
        if(isFull()){
            cout << "Stack is full" << endl;
            return;
        }

        top++;
        data[top] = val;
    }

    int pop(){
        if(isEmpty()){
            cout << "Can't Pop stack is empty" << endl;
            return -1;
        }
        int value = data[top];
        top--;

        return value;
    }

    void display(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Elements of stack: ";
        for(int i = 0; i <= top; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    /*
    Okay eto din je stack queue je shikhechi shei gula aisha ekhon c++ e korar chace aisha porche. 

    Stack er operations:
        1. push
        2. pop
        3. peek
        4. isEmpty()
        5. isFull()
 
    Stack s;

    s.push(5);
    s.push(12);
    s.push(8);


    s.display();

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    s.display();
    return 0;
 }
*/


//uporer je program lekhchi oita chilo normally array dia. but ekhon korbo linked list dai.

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int value){
        data = value;
        next = nullptr;
    }
};

class Stack{
    public:
    node* top;

    //constructor
    Stack(){
        top = NULL;
    }

    bool isEmpty(){
        if(top == NULL){
            return true;
        }else{
            return false;
        }

        //ar er theke shohoj upay hoche 1 line er ekta code
        // return top = NULL;
    }

    void push(int val){
        node* newNode = new node(val);
        if(top == NULL){
            top = newNode;
        }else{
            newNode->next = top;
            top = newNode;
        }
    }

    int pop(){
        if(isEmpty()){
            return -1;
        }

        int val = top->data;
        node* temp = top;
        top = top->next;
        delete temp;

        return val;
    }

    void display(){
        if(isEmpty()){
            cout << "No element found" << endl;
            return;
        }

        node *temp = top;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.display();
    s.push(5);
    s.push(10);
    s.push(15);
    s.display();

    cout << s.pop() << endl;
    s.display();
    return 0;
}