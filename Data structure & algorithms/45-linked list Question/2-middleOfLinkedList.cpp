#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val) : data(val), next(nullptr) {}
};

void insertAtLast(node* &head, int val){
    node* newNode = new node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(node* head){
    cout << "Elements of list: ";
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int getLen(node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

node* middleOfLL(node* head){
    for(int i = 0; i < getLen(head) - 1; i++){
        head = head->next;
    }
    return head;
}

int main()
{
    node* head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 4);
    insertAtLast(head, 5);
    insertAtLast(head, 6);
    head = middleOfLL(head);
    display(head);
    return 0;
}