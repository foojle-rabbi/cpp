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

node* getMid(node* &head){
    node* slow = head;
    node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}

node* merge(node* &left, node* &right){
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

node* mergeSort(node* &head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* left = head;
    node* middle = getMid(head);
    node* right = middle->next;
    middle->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);
    merge(left, right);  
}

int main()
{
    node* list = NULL;
    insertAtLast(list, 5);
    insertAtLast(list, 7);
    insertAtLast(list, -22);
    insertAtLast(list, -123);
    insertAtLast(list, -1);
    insertAtLast(list, 0);
    insertAtLast(list, 5560);
    display(list);

    node* head = mergeSort(list);
    display(head);
    return 0;
}