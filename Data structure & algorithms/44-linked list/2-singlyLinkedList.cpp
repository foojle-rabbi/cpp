#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
    //fojle u can also use this one line of code for constructor
    // Node(int value) : data(value), next(nullptr) {}
};

//insertion operations
void insetAtHead(node* &head, int data){
    node *newNode = new node(data);

    newNode->next = head;
    head = newNode;
}

void insertAtLast(node* &head, int data){
    node *newNode = new node(data);

    node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
};

void insertAtPosition(node* &head, int data, int pos){
    if(pos == 0){
        insetAtHead(head, data);
        return;
    }
    node* temp = head;

    int i = 1;
    while(i < pos){
        i++;
        temp = temp->next;
    }

    node* newNode = new node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// deletion operations
void deleteAtFirst(node* &head){
    node* temp = head;
    head = head->next;
    
    delete temp;
}

void delteAtLast(node* &head){
    node* temp = head;

    while(temp != NULL){
        temp = temp->next;
    }

    

}

//display function
void display(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    node* head = new node(12);
    display(head);

    insetAtHead(head, 10);
    display(head);
    
    insertAtLast(head, 15);
    display(head);

    insertAtPosition(head, 13, 0);
    display(head);

    deleteAtFirst(head);
    display(head);
    return 0;
}