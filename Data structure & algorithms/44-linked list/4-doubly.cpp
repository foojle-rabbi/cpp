#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    // constructor
    node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

void insertAtHead(node* &head, int val){
    node* newNode = new node(val);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtLast(node* &head, int val){
    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    node* newNode = new node(val);
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPos(node* head, int val, int pos){
    node* temp = head;

    int i = 1;

    while(i < pos){
        i++;
        temp = temp->next;
    }

    node* newNode = new node(val);
    newNode->next = temp->next;
    newNode->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteAtFirst(node* &head){
    node* temp = head;
    head->next->prev = NULL;
    head = head->next;

    delete temp;
}

void deleteAtLast(node* &head){
    node* previous = head;
    node* current = head->next;

    while(current->next != NULL){
        previous = previous->next;
        current = current->next;
    }

    previous->next = NULL;

    delete current;
}

void deleteAtPos(node* &head, int pos){
    node* previous = head;
    node* current = head->next;
    int i = 1;

    while(i < pos - 1){
        i++;
        previous = previous->next;
        current = current->next;
    }

    previous->next = current->next;
    current->next->prev = previous;

    delete current;
}

void deleteFunc(node* &previous, node* &current){
    /*
    eikhane ei condition deoyar reason hocche jodi amar current node ta jodi shesh node hoy tahole ami jodi 100 number line ta lekhi orthat  current->next->prev = previous;
    kori tahole toh program thik moto kaj korbe na. tai shesh node handle korar jonno e ei extra condition deoya.
    */
    if(current->next == NULL){
        previous->next = NULL;
        delete current;
        return;
    }
    previous->next = current->next;
    current->next->prev = previous;

    delete current;
}

void deleteByValue(node* &head, int val){
    if(head->data == val){
        deleteAtFirst(head);
    }

    node* previous = head;
    node* current = head->next; 

    while(current != NULL){
        if(current->data == val){
            deleteFunc(previous, current);
            current = previous->next;
        }else{
            previous = previous->next;
            current = current->next;
        }
    }
}

void display(node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void recursionDisplay(node* head){
    //base case
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    recursionDisplay(head->next);
    cout << endl;
}

/*
Yay fazle finally! hah ha recursion dia e tmi display function make kore fella. jai hook recursion re aro onek valo vabe bujhte hobe. you got it? 
*/

int main()
{
    node* head = new node(5);
    display(head);

    insertAtHead(head, 12);
    insertAtHead(head, 3);
    insertAtHead(head, 9);
    display(head);

    insertAtLast(head, 78);
    display(head);

    insertAtPos(head, 33, 3);
    insertAtPos(head, 55, 3);
    insertAtPos(head, 55, 3);
    insertAtPos(head, 55, 3);
    display(head);

    // deleteAtFirst(head);
    // display(head);

    // deleteAtLast(head);
    // display(head);

    // deleteAtPos(head, 3);
    // display(head);

    // deleteByValue(head, 9);
    // display(head);

    deleteByValue(head, 55);
    // recursionDisplay(head);
    display(head);

    return 0;
}