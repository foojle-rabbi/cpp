#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    //constructor
    node(int v) : val(v), next(nullptr) {}
};

void display(node* head){
    cout << "Elements of list: ";
    while(head != nullptr){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtLast(node* &head, int val){
    node* newNode = new node(val);
    if(head == nullptr){
        head = newNode;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

node* Kreverse(node* head, int k){
    //base case
    if(head == NULL){
        return NULL;
    }
    node* prev = NULL;
    node* current = head;
    node* forward = NULL;

    for(int i = 0; i < k; i++){
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    
    head->next = Kreverse(current, k);
    return prev;
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

    head = Kreverse(head, 2);
    display(head);
    return 0;
}

//not solved