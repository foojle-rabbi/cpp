#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val) : data(val), next(NULL) {}
};

void insertAtTail(node* &head, node* &tail, int val){
    node* newNode = new node(val);
    tail->next = newNode;
    tail = newNode;
}

void display(node* head);

//--------------- approch 1 by replacing values -----------------
void sortThese(node* &head){
    node* temp = head;

    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    while(temp != NULL){
        if(temp->data == 0)
            countZero++;
        else if(temp->data == 1)
            countOne++;
        else if(temp->data == 2)
            countTwo++;
        
        temp = temp->next;
    }

    temp = head;

    while(temp != NULL){
        if(countZero != 0){
            temp->data = 0;
            temp = temp->next;
            countZero--;
        }else if(countOne != 0){
            temp->data = 1;
            temp = temp->next;
            countOne--;
        }else if(countTwo != 0){
            temp->data = 2;
            temp = temp->next;
            countTwo--;
        }
    }
}

//--------------- approch 2 without replacing values applying merge concept -----------------
void withoutReplacing(node* &head){
    node* temp = head;

    node* zeroHead = new node(-1);
    node* zeroTail = zeroHead;
    
    node* oneHead = new node(-1);
    node* oneTail = oneHead;

    node* twoHead = new node(-1);
    node* twoTail = twoHead;

    while(temp != NULL){
        if(temp->data == 0)
            insertAtTail(zeroHead, zeroTail, 0);
        else if(temp->data == 1)
            insertAtTail(oneHead, oneTail, 1);
        else if(temp->data == 2)
            insertAtTail(twoHead, twoTail, 2);
        
        temp = temp->next;
    }

    cout << "Displaying the extra nodes values: " << endl;
    display(zeroHead);
    display(oneHead);
    display(twoHead);

    if(zeroHead->next == NULL){
        oneTail->next = twoHead->next;
        head = oneHead->next;
        return;
    }else if(oneHead->next == NULL){
        zeroTail->next = twoHead->next;
        head = zeroHead->next;
        return;
    }else if(oneHead->next == NULL && zeroHead->next == NULL){
        head = twoHead->next;
        return;
    } // Oooh yeah the logic is working fine.

    // zeroTail->next = oneHead->next;
    // oneTail->next = twoHead->next;
    // head = zeroHead->next;

    // delete zeroHead;
    // delete zeroTail;
    // delete oneHead;
    // delete oneTail;
    // delete twoHead;
    // delete twoTail;
}

void display(node* head){
    cout << "Elements of list: ";
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node* head = new node(1);
    node* tail = head;

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 1);
    display(head);

    withoutReplacing(head);
    display(head);
    return 0;
}