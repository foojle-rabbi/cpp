#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int val) : data(val), next(NULL) {}
};

void display(node* head){
    cout << "Elements of list: ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;    
}

void insertAtLast(node* head, int val){
    node* newNode = new node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp->next = newNode;
}


int main()
{
    /*
    I think you have understand what this file is for. Ar tar poreo jodi na bujho tahole boli:

    ami bujhte aschi je pass by value ar pass by refernce kivabe kaj kore? accha aage code kore dry run kore nije bujhi then aisha bujhaiya lekhi.


    shoon vai, ja oi loichilam je ajke aramse pass by vlaue ar pass by reference kivabe kaaj kore. but unfortunately valo vabe concept ta mathay dukhteche na.
    jokhon abar clear mind nia bujhte ashbo tokhon valo vabe grasp korbo in-shaa-allah.
    */

    node* head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 4);
    display(head);

    return 0;
}

