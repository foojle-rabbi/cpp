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
            /*
            ha Mr. ei je function ta make kora hoiche eikhane kebol single bar ekta node delte koira return kore. kintu tumi joidi shokil duplicates delete 
            korte chao tahole tomare current pointer tare update korte hobe cause current pointer tare kintu deleteNode delte kore diche. jodi current re 
            current = prev->next;  na koro tahole funtion thik moto kaaj korbe na.
            */
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

/*
Accha ei je function ta likhchi eita ashole eita dekhar jonno likhchilam je vai amra toh kono ekta node delete korte gele shob shomoy 2 ta pointer use kortam 
ekta chilo prev ar arekta hoichilo gia current; toh she jonno ami chiatechilam je matro ekta pointer use koira ki delte kora jay kina. hae eita sotto je vai tumi
ekta temp pointer dia majher node ta re skip korte parba. but boro shomossa holo gia je tumi oi je node tare delete korte chichila tare memory free korte parba na
toh memory jodi free na korte paro taile toh oita efficient hoilo na tai na. tai tomare memory free korar jonno holeo 2 ta pointer use korte hoibo.
*/

// void deleteNew(node* &head, int pos){
//     node* temp = head;
//     int i = 1;

//     while(i < pos){
//         i++;
//         temp = temp->next;
//     }

//     temp->next = temp->next->next;
//     delete temp->next;
// }

bool isCircular(node* head){
    node* temp = head->next;
    while(temp != NULL){
        if(temp->next == head){
            return true;
        }
        temp = temp->next;
    }
    return false;
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

    // deletByValue(head, 10);
    // deletByValue(head, 5);
    // deletByValue(head, 12);
    // deletByValue(head, 15);
    // deletByValue(head, 13);
    // deletByValue(head, 4);
    // deletByValue(head, 20);
    // display(head);

    // insertAtLast(head, 15);
    display(head);

    // insetAtHead(head, 10);
    // display(head);

    /*
    okay eikhane aisha ami eitai bolte pari je vai ekhon jehetu shob gula insert kora gula deleted hoiya geche tar mane amar kono node o nai abar head = null;
    toh ei obosthay ami jodi last e insert korte jai tahole amr insertion hocche na. But jodi ami fist e insert korte jai tokhon kintu abar thiki kaj korteche.
    tai aamr insetAtHead function e ekata extra condition use korte pari.
    */

    // deleteNew(head, 3);
    // display(head);


    //temon kichu na; isCircular() er ekta function check korar jonno ashlam. And you know what the function is working fine.
    if(isCircular(head)){
        cout << "List is circular" << endl;
    }else{
        cout << "List is not circular" << endl;
    }
    return 0;
}