#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val) : data(val), next(nullptr) {}

    //another way
    // node(int data){
    //     this->data = data;
    //     next = NULL;
    // }
};

void insertAtFirst(node* &head, int val){
    node* newNode = new node(val);
    if(head == NULL){
        head = newNode;
        head->next = head;
        return;
    }

    node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void traverse(node* head){
    if(head == NULL){
        cout << "Empty list" << endl;
        return;
    }
    cout << "Value of list: ";
    node* temp = head;
    while(temp->next != head){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node* head = NULL;
    traverse(head);

    insertAtFirst(head, 5);
    insertAtFirst(head, 7);
    traverse(head);
    return 0;
}