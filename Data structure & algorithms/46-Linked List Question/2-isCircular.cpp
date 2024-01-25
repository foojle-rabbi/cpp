#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val) : data(val), next(nullptr) {}
};

void insertAtFirst(node* &head, int val){
    node* newNode = new node(val);

    if(head == NULL){
        head = newNode;
        // head->next = head;
        newNode->next = head;
        return;
    }

    node* temp = head;
    while(temp ->next != head){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void display(node* head){
    cout << "Elements of List: ";
    node* temp = head;
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);
    cout << endl;
}

bool isCircular(node* head){
    node* temp = head->next;
    while(temp != NULL){
        if(temp->next == head){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    node* head = NULL;
    insertAtFirst(head, 1);
    insertAtFirst(head, 2);
    insertAtFirst(head, 3);
    insertAtFirst(head, 4);
    insertAtFirst(head, 5);
    display(head);

    if(isCircular(head)){
        cout << "List is circular" << endl;
    }else{
        cout << "List is not circular" << endl;
    }
    return 0;
}