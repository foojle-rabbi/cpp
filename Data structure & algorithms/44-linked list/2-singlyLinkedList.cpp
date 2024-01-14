#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
    //fojle u can also use this one line of code for constructor
    // Node(int value) : data(value), next(nullptr) {}
};

//insertion operations
void insetAtHead(node* &head, int data){
    node *newNode = new node(data);

    newNode->next = head;
    head = newNode;
}

void insertAtLast(node* &head, int data){
    if(head == NULL){
        insetAtHead(head, data);
        return;
    }
    node *newNode = new node(data);

    node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
};

void insertAtPosition(node* &head, int data, int pos){
    if(pos == 0){
        insetAtHead(head, data);
        return;
    }
    node* temp = head;

    int i = 1;
    while(i < pos){
        i++;
        temp = temp->next;
    }

    node* newNode = new node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// deletion operations
void deleteAtFirst(node* &head){
    node* temp = head;
    head = head->next;
    
    delete temp;
}

void delteAtLast(node* &head){
    node* prev = head;
    node* current = head->next;

    while(current->next != NULL){
        prev = prev->next;
        current = current -> next;
    }

    delete current;
    prev -> next = NULL; 
}

void deleteAtPos(node* &head, int pos){
    if(pos == 0){
        deleteAtFirst(head);
        return;
    }
    
    node* prev = head;
    node* current = head->next;
    int i = 1;

    while(i < pos){
        prev = prev->next;
        current = current->next;
        i++;
    }

    prev->next = current->next;
    delete current;
}

void deleteNode(node* &prev, node* current){
    prev->next = current->next;
    delete current;

    return;
}

void deletByValue(node* &head, int val){
    if(head->data == val){
        deleteAtFirst(head);
        return;
    }

    node* prev = head;
    node* current = head->next;

    while(current != NULL){
        if(current->data == val){
            deleteNode(prev, current);
            return;
        }else{
            prev = prev->next;
            current = current->next;
        }
    }
    cout << val << " is not found" << endl;
}

bool searchValue(node* &head, int val){
    node* temp = head;

    while(temp != NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

//display function
void display(node* &head){
    if(head == NULL){
        cout << "Empty linked list" << endl;
        return;
    }
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    node* head = new node(12);
    display(head);

    insetAtHead(head, 10);
    display(head);
    
    insertAtLast(head, 15);
    display(head);

    insertAtPosition(head, 13, 0);
    insertAtPosition(head, 4, 1);
    insertAtPosition(head, 20, 3);
    display(head);

    // deleteAtPos(head, 5);
    // display(head);

    cout << searchValue(head, 18) << endl;

    deletByValue(head, 10);
    deletByValue(head, 5);
    deletByValue(head, 12);
    deletByValue(head, 15);
    deletByValue(head, 13);
    deletByValue(head, 4);
    deletByValue(head, 20);
    display(head);

    insertAtLast(head, 15);
    display(head);

    // insetAtHead(head, 10);
    // display(head);

    /*
    okay eikhane aisha ami eitai bolte pari je vai ekhon jehetu shob gula insert kora gula deleted hoiya geche tar mane amar kono node o nai abar head = null;
    toh ei obosthay ami jodi last e insert korte jai tahole amr insertion hocche na. But jodi ami fist e insert korte jai tokhon kintu abar thiki kaj korteche.
    tai aamr insetAtHead function e ekata extra condition use korte pari.
    */
    return 0;
}