#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val) : data(val), next(nullptr) {}
};

void insertAtTail(node* &head, int val){
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* newNode = new node(val); 
    temp->next = newNode;
}

void display(node* head){
    cout << "Elements of node: ";
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

node* solve(node* &first, node* &second){
    // case handle
    if(first == NULL){
        return second;
    }
    if(second== NULL){
        return first;
    }

    node* curr1 = first;
    node* next1 = first->next;

    node* curr2 = second;
    node* next2 = nullptr;
    //if there is only one node on each both.
    if(next1 == NULL){
        curr1->next = curr2;
        return;
    }

    while(next1 != NULL && curr2 != NULL){
        if((curr1->data <= curr2->data) && (next1->data >= curr2->data)){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }else{
            curr1 = curr1->next;
            next1 = next1->next;
            
            //checking if my next 1 pointer pointing to null pointer. if its pointing to null ptr it means this list is empty so we have the put the next to 
            // the seond list;
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

node* mergeList(node* &first, node* &second){
    if(first->data <= second->data){

        cout << "first value: " << first->data << endl;
        cout << "second value: " << second->data << endl;
        cout << "second er ta boro" << endl;

        return solve(first, second);
    }else{
        cout << "first value: " << first->data << endl;
        cout << "second value: " << second->data << endl;
        cout << "first er ta boro" << endl;

        return solve(second, first);
    }
}

int main()
{
    node* head1 = new node(1);
    node* head2 = new node(2);
    insertAtTail(head1, 3);    
    insertAtTail(head1, 5);    

    insertAtTail(head2, 4);
    insertAtTail(head2, 5);

    display(head1);
    display(head2);

    node* head = mergeList(head1, head2);
    display(head);
    return 0;
}