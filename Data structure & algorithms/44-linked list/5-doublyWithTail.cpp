#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* prev;
    node* next;

    // constructor
    node(int data) : data(data), prev(nullptr), next(nullptr) {}
};

void insertAtFirst(node* &head, int val){
    node * newNode = new node(val);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void display(node* head){
    // traversing with the help of recursion concept:
    //base case
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    display(head->next);
    cout << endl;  //amar mote ei end ta na dileo hobe;
}

void headTail(node* head, node* tail){
    cout << "value of head: " << head->data << endl;
    cout << "value of tail: " << tail->data << endl;
}

int main()
{
    node* head = new node(5);
    node* tail = head;

    /*
    lets write the operations first: 
    insertion: 
        1. at first
        2. at last
        3. at position
    deletion:
        1. at first
        2. at last
        3. at position
        4. by value
    traverse
        1. from head
        2. from tail
    */

    // insertAtFirst(head, 43);
    // insertAtFirst(head, 23);
    // insertAtFirst(head, 11);
    // display(head);
    // headTail(head, tail);

    
    return 0;
}