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
        return;
    }

    newNode->next = head;
    head = newNode;
}

void display(node* head){
    cout << "Elements of list: ";
    while(head != NULL){
        cout << head -> data <<" ";
        head = head->next;
    }
    cout << endl;
}

void deleteThis(node* &prev, node* &current){
    node* temp = current;
    prev->next = current->next;

    delete temp;
}

void removeDuplicates(node* &head){
    node* temp = head;
    while(temp->next != NULL){
        while(temp->data == temp->next->data){
            // deleteThis(temp, temp->next);
            
            //iccha korte alada function o call kora jaibo abar iccha korle ei 3 line er code dia o delete kora jaibo. kahini same e;
            node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;            
        }
        temp = temp->next;
    }
}

int main()
{
    node* head = NULL;
    display(head);

    insertAtFirst(head, 5);
    insertAtFirst(head, 4);
    insertAtFirst(head, 4);
    insertAtFirst(head, 3);
    insertAtFirst(head, 3);
    insertAtFirst(head, 3);
    insertAtFirst(head, 2);
    insertAtFirst(head, 2);
    insertAtFirst(head, 1);
    display(head);

    removeDuplicates(head);
    display(head);
    return 0;
}