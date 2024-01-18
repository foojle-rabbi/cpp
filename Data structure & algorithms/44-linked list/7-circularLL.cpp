#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    //constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtFirst(node* &head, int val){
    node* newNode = new node(val);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }

    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtLast(node* &head, int val){
    if(head == NULL){
        insertAtFirst(head, val);
        return;
    }

    node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    node* newNode = new node(val);
    temp->next = newNode;
    newNode->next = head;
}

void deleteAtFirst(node* &head){
    node* temp = head;
    if(temp->next == head){
        head = NULL;
        delete temp;
        return;
    }

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = head->next;
    node* nodeToDelete = head;
    head = head->next;

    delete nodeToDelete;
}

void deleteAtLast(node* &head){
    node* temp = head;
    if(temp->next == head){
        delete temp;
        head = NULL;
        return;
    }

    while(temp->next->next != head){
        temp = temp->next;
    }

    node* nodeToDelete = temp->next;
    temp->next = head;

    delete nodeToDelete;
}

void deleteAtPos(node* &head, int pos){
    if(pos == 1){
        deleteAtFirst(head);
        return;
    }

    int i = 1;
    node* temp = head;
    while(i < pos - 1){
        temp = temp->next;
        i++;
    }

    node* nodeToDelete = temp->next;
    temp->next = temp->next->next;

    delete nodeToDelete;
}

void traversal(node* &head){
    node* temp = head;
    if(head == NULL){
        cout << "Empty list" << endl;
        return;
    }

    /*
    nicher jei traversal shei ta kono value print korte parbe na cause head pointer toh nijei head point koira rakhche.
    */
    // while(temp->next != head){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);
    cout << endl;
}

int main()
{
    node* head = NULL;
    insertAtFirst(head, 7);
    insertAtFirst(head, 17);
    insertAtFirst(head, 5);
    traversal(head);

    insertAtLast(head, 11);
    insertAtLast(head, 32);
    traversal(head);

    deleteAtPos(head, 3);
    deleteAtPos(head, 3);
    deleteAtPos(head, 3);
    deleteAtPos(head, 1);
    deleteAtPos(head, 1);
    traversal(head);

    /*
    Jaak finaally kichu case handle koira circular linked list er chapter tao kichu ta close korte parlam. ar ekta jinish toh vai khub valo kore bujhte parchi je
    vai Main jei jinish ta sheTa hocche "concept clear thaka" concept clear thakle jevabei dek na keno nije nijei oigular solve ber kora jay. abar nijer moto koreo
    kora jay. Ar hoo dry run jinish ta marattok. jodi program koira dry run kora jay taile oi jinish ta valo vabe bujhao jay. abar oi concept ta clear oo hoy. 
    pore nijer iccha moto code change koira nijer moto koira kora jay. 

    So, aami tomare komu ki vai jodi kono jinish bujhte shomoy lage? tahole ami komu vai shomoy lagaiya hoileo valo vabe bujh. baas...! eituku e.
    */
    return 0;
}