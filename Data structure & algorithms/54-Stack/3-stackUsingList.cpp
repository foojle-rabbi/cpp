#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val){
        data = val;
        next = nullptr;
    }
};

class stack{
    private:
    node* top;

    public:
    //constructor
    stack(void){
        top = NULL;
    }

    void push(int val){
        node* newNode = new node(val);
        if(top == NULL){
            top = newNode;
            return;
        }else{
            newNode->next = top;
            top = newNode;
        }
    }

    void pop(void){
        if(top == NULL){
            return;
        }
        node* temp = top;
        top = top->next;

        delete temp;
    }

    int peek(void){
        if(top == NULL){
            return -1;
        }
        
        return top->data;
    }

    bool empty(void){
        // if(top == NULL){
        //     return true;
        // }else{
        //     return false;
        // }

        return top == NULL;
    }

    int size(void){
        node* temp = top;
        int count = 0;

        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        return count;
    }

    void display(void){
        if(top == NULL){
            cout << "Thre is no for print" << endl;
            return;
        }
        cout << "Elemets of stack: ";
        node* temp = top;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    /*
        operations:
        1. push
        2. pop
        3. size
        4. peek
        5. empty
        6. top
    */
   
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.display();

    // s.pop();
    // s.pop();
    // s.display();

    // cout << "size of stack list: " << s.size() << endl;
    // cout << "Peeked item: " << s.peek() << endl;
    // s.display();

    // if(s.empty()){
    //     cout << "Stack is empty" << endl;
    // }else{
    //     cout << "Stack is not empty" << endl;
    // }

    // s.pop();
    // s.pop();
    // cout << "size of stack list: " << s.size() << endl;
    // s.display();

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }

    cout << "size of stack list: " << s.size() << endl;
    s.pop();
    s.pop();
    s.pop();
    cout << "size of stack list: " << s.size() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }
    s.display();
    

    //now whats happen
    s.pop();
    cout << "size of stack list: " << s.size() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }
    s.display();
    return 0;
}