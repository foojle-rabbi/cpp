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
    cout << "Elements of List: ";
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

node* getMid(node* head){
    node* slow = head;
    node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

node* reverse(node* head){
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

bool isPalindrome(node* &head){
    node *middle = getMid(head);
    node* temp = reverse(middle->next);
}

int main()
{
    node* head = nullptr;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 3);
    insertAtLast(head, 2);
    insertAtLast(head, 1);
    display(head);

    if(isPalindrome(head)){
        cout << "List is Palindrome" << endl;
    }else{
        cout << "List is not palindrome" << endl;
    }
    return 0;
}