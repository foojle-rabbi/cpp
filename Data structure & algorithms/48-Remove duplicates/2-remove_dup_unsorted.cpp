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
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

//-------------------- 1st solution ----------------------------
void firstSol(node* &head){
    node* current = head;
    node* forward;
    while(head != NULL){
        if(head->next != NULL)
            forward = head->next;

        while(forward != NULL){
            if(current->data == forward->data){
                node* nodeToDelete = forward;
                current->next = forward->next;
                delete forward;
            }else{
                forward = forward->next;
            }
        }
        current = current->next;
    }
}

int main()
{
    /*
        Unosorted linked list re sort korar 3 ta way ache. tar moddhe ekta holo 2 ta loop er sahajje. 2nd ta holo sort kore and third ta holo map re use kore
        ekhon kotha hocche kon solution optimal beshi? let's see: 
            1. 2 loops will be used
                time complexity = O(n^2)
                space complexity = O(1)
            2. first sort then apply "remove duplicates from a sorted list"
                time complexity = O(nlogn)
                space complexity = O(n)
            3. using map
                time complexity = O(n)
                space complexity = O(n)

    So, as you can see the optimal solution is the third one.
    */

    node* head = NULL;

    insertAtFirst(head, 4);
    insertAtFirst(head, 2);
    insertAtFirst(head, 1);
    insertAtFirst(head, 2);
    insertAtFirst(head, 3);
    insertAtFirst(head, 4);
    display(head);

    firstSol(head);
    display(head);
    return 0;
}