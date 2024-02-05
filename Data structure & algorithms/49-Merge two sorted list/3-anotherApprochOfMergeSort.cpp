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
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void display(node* head){
    cout << "Elements of list: ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;    
}

node* merge(node* left, node* right){
    node* ans = new node(-1);
    node* temp = ans;

    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while(left != NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while(right != NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    return ans->next;
}

int main()
{
    node* head1 = NULL;
    insertAtLast(head1, 1);
    insertAtLast(head1, 3);
    insertAtLast(head1, 5);
    display(head1);

    node* head2 = NULL;
    insertAtLast(head2, 2);
    insertAtLast(head2, 4);
    insertAtLast(head2, 5);
    display(head2);

    node* head = merge(head1, head2);
    display(head);

    /*
        Okay its totally working fine. casue here we applied the merge two sorted array logic;
    */

    return 0;
}