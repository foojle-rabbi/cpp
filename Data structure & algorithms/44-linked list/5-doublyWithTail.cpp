#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* prev;
    node* next;

    // constructor
    node(int data) : data(data), prev(nullptr), next(nullptr) {}
};

void insertAtFirst(node* &head, node* &tail, int val){ 
    /*
    etokkhon normally funcion gular kaj korchi but ekhon kichu condition niya kaaj kortechi jemon jodi amar head pointer e kono value nai; mane amar head pointer
    null pointer shekkhetre ki kora jete pare? shei condion nia e amra kaaj kortechi.
    */
    node * newNode = new node(val);

    if(head == NULL){
        head = tail = newNode;
    }else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtLast(node* &tail, int val){
    node* newNode = new node(val);

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void insertAtPos(node* &head, node* &tail, int val, int pos){
    if(pos == 1){
        insertAtFirst(head, tail, val);
        return;
    }
    /*
    Eikhane ami 2 ta if condition lagailam ekta lagaichi first e ar arekta lagaichi last. prothome mane first e laganor reason hochhe gia jodi amar position er
    value 1 dey taile toh er mane hoilo gia first e insert korte hobe but bishoy ta hocche gia ami jodi first e insert korte jai amar temp pointer er help nia
    tahole amar insertion ta thik moto kaaj korte na. tai ami ekta condition lagailam je vai amare jodi position er value 1 dey taile tumi (insertAtfirst) fun
    call kore return kre felbe.
    */

    int i = 1;
    node *temp = head;

    while(i < pos - 1){
        temp = temp->next;
        i++;
    }

    /*
    ar nicher jei if condition sheta holo jodi vai amar pointer jaite jaite null pointer e choila jay tar mane amar insert korte hobe shesh dik diye.
    insertAtLast name je function banaichilam tare call korchi ar pore return kore dichi. that's it.
    */
    if(temp->next == NULL){
        insertAtLast(tail, val);
        return;
    }

    node* newNode = new node(val);
    newNode->next = temp->next;
    temp->next->prev = newNode;

    newNode->prev = temp;
    temp->next = newNode;
}

// void display(node* head){
//     // traversing with the help of recursion concept:
//     //base case
//     if(head == NULL){
//         return;
//     }
//     cout << head->data << " ";
//     display(head->next);
//     cout << endl;  //amar mote ei end ta na dileo hobe;
// }

void deleteAtFirst(node* &head){
    node* temp = head;
    head->next->prev = NULL;

    head = head->next;

    delete temp;
}

void deleteAtLast(node* &tail){
    node* temp = tail->prev;

    tail->prev = NULL;
    delete tail;
    tail = temp;
    tail->next = NULL;
}

void display(node* head){
    if(head == NULL){
        cout << "empty list" << endl;
        return;
    }
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void headTail(node* head, node* tail){
     if(head == NULL){
        cout << "there is no head and tail value" << endl;
        return;
    }
    cout << "value of head: " << head->data << endl;
    cout << "value of tail: " << tail->data << endl;
}

void reverseDisplay(node* tail){
    while(tail != NULL){
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << endl;
}
int main()
{
    // node* head = new node(5);
    // node* tail = head;

    /*
    lets write the operations first: 
    insertion: 
        1. at first
        2. at last
        3. at position
    deletion:
        1. at first
        2. at last
        3. at position
        4. by value
    traverse
        1. from head
        2. from tail
    */

    // insertAtFirst(head, 43);
    // insertAtFirst(head, 23);
    // insertAtFirst(head, 11);
    // // display(head);
    // headTail(head, tail);


    // insertAtLast(tail, 44);
    // display(head);
    // headTail(head, tail);

    // insertAtPos(head, tail, 22, 1);
    // display(head);
    // headTail(head, tail);
    
    // reverseDisplay(tail);
    // headTail(head, tail);

    node* head = NULL;
    node* tail = NULL;
    // display(head);
    // headTail(head, tail);

    insertAtFirst(head, tail, 5);
    insertAtFirst(head, tail, 15);
    insertAtFirst(head, tail, 32);
    // display(head);
    // headTail(head, tail);

    /*
    uporer je operations gula geche tar modhe shob gula chilo insertion operation. ar sathe kichu exceptiona o handle kora hoiche. ekhon deletion er paala.
    */

    // deleteAtFirst(head);
    // display(head);
    // headTail(head, tail);

    deleteAtLast(tail);
    display(head);
    headTail(head, tail);

    /*
    eikhane ar baki gula korlam na karon ami doulby linked list jeitate tail nai oitate delete at position and delete by value solve korchi tai mone hoy na ar 
    extra likhar dorkar ache. dorkar hoile oi program theke copy koira nilei hoy. 
    */
    return 0;
}