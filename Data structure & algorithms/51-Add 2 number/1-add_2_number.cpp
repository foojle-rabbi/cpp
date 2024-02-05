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
    while(head != NULL){
        cout << head -> data << " ";
        head = head->next;
    }
    cout << endl;
}

node* reverseList(node* &head){
    node* prev = nullptr;
    node* current = head;
    node* forward = nullptr;

    while(current != NULL){
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    return prev;
}



void addTwoNum(node* first, node* second, node* &head){
    first = reverseList(first);
    second = reverseList(second);

    int carry = 0;
    int sum = 0;
    int digit = 0;

    while(first != NULL && second != NULL){
        sum = carry + first->data + second->data;
        digit = sum % 10;
        carry = sum / 10;

        insertAtLast(head, digit);

        first = first->next;
        second = second->next;
    }

    while(first != NULL){
        sum = carry + first->data;
        digit = sum % 10;
        carry = sum / 10;
        insertAtLast(head, digit);
        first = first->next;
    }

    while(second != NULL){
        sum = carry + second->data;
        digit = sum % 10;
        carry = sum / 10;
        insertAtLast(head, digit);
        second = second->next;
    }

    while(carry != 0){
        digit = carry % 10;
        insertAtLast(head, digit);
        carry = carry / 10;
    }

    head = reverseList(head);
}

int main()
{
    node* head1 = NULL;
    insertAtLast(head1, 5);
    insertAtLast(head1, 7);
    display(head1);

    node* head2 = NULL;
    insertAtLast(head2, 2);
    insertAtLast(head2, 9);
    insertAtLast(head2, 5);
    display(head2);

    node* head = NULL;
    addTwoNum(head1, head2, head);
    display(head);
    return 0;
}