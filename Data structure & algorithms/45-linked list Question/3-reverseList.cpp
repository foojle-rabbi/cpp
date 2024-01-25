#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val) : data(val), next(nullptr) {}
};

void display(node* head){
    cout << "Elements of list: ";
    while(head != nullptr){
        cout << head->data << " ";
        head = head -> next;
    }
    cout << endl;
}

void insertAtLast(node* &head, int val){
    node* newNode = new node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    node* temp = head;

    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
}


void reverseList(node* &head){
    if(head == NULL || head->next == NULL){
        return;
    }

    node* prev = nullptr;
    node* current = head;
    node* forward = nullptr;

    while(current != NULL){
        forward = current -> next;
        current->next = prev;
        prev = current;
        current = forward;
    }

    head = prev;
}
int main()
{
    node* head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 4);
    insertAtLast(head, 5);
    display(head);

    reverseList(head);
    display(head);
    return 0;
}