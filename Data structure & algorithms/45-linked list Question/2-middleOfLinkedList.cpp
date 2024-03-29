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
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

//---------- 1st approch -----------------
int getLen(node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

node* middleOfLL(node* head){
    for(int i = 0; i < getLen(head) - 1; i++){
        head = head->next;
    }
    return head;
}

//---------- 1st approch -----------------
//there is an another approch of it: which will take n/2 time complexity.
node* middleOfLLOptimal(node* head){
    if(head == NULL){
        return head;
    }

    node* slow = head;
    node* fast = head->next;
    /*
        Accha eikhane ami jodi fast pointer ta ke head er next e point na kori tahole loop ghurar shomoy amar slow pointer ek dhap agaiya jaibo ga. jei ta kina
        vul ans return korbe. tai fast ke amar head er next e point koranO lagche.
    */

    while(fast != NULL){
        slow = slow->next;
        fast = fast ->next;
        if(fast != NULL){
            fast = fast->next;
        }
    }
    
    /*
        accha eikhane arekta shundor function ache mane condition ache jeita dia khub easily e middle elements khuijja paoya jay. sheta 
        hocche while(fast != NULL && fast->next != NULL) ei condition use kortle 2nd time abar vitore gia arekta condition check korar dorkar
        nai.
    */
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

int main()
{
    node* head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 4);
    insertAtLast(head, 5);
    // insertAtLast(head, 6);
    head = middleOfLLOptimal(head);
    display(head);
    return 0;
}