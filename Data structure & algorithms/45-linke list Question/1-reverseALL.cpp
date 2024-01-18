#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // constructor
    node(int val) : data(val), next(nullptr) {}
};

void insertAtFirst(node* &head, int val){
    node* newNode = new node(val);

    newNode -> next = head;
    head = newNode;
}

void print(node* head){
    cout << "Elements: " ;
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void reverseLL(node* &head){
    if(head == NULL || head->next == NULL){
        return;
    }
    node* prev = NULL;
    node* current = head;
    // node* forward = head->next;

    // while(current != NULL){
    //     current->next = prev;
    //     prev = current;
    //     current = forward;
    //     if(forward != nullptr) //--> ei condition ta na dile last e jokhon current last node e thake ar forward null e thake tokhon jodi abar null er next kori
    //         forward = forward ->next; // tahole error throw korbe. she jonno e ei condition ta deoya.
    // }
    // head = prev;

    node* forward = NULL;

    while(current != NULL){
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }

    head = prev;
}

int main()
{
    node* head = new node(5);

    insertAtFirst(head, 8);
    insertAtFirst(head, 2);
    insertAtFirst(head, 12);
    print(head);

    reverseLL(head);
    print(head);
    return 0;
}