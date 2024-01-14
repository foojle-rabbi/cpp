#include<iostream>
using namespace std;

//er age toh class dia korchi eibar sturcture dia kori
struct node{
    int data;
    node* next;

    //consturctor --> shon vai c++ e class ar struct same jinish but eikhane khali access modifier ta khlai vinno. na hoy class e jemon variable ar fucntion 
    //neoya jay thik shei vabe structure e o method behaviour neoya jay.
    node(int val) : data(val), next(NULL) {}
};

void insertAtHead(node* &head, node* &tail, int val){
    node* newNode = new node(val);

    newNode->next = head;
    head = newNode;
}

void insertAtTail(node* &tail, int val){
    node* newNode = new node(val);

    tail->next = newNode;
    tail = newNode;
}

void headTail(node* &head, node* &tail){
    cout << "value of head: " << head->data << endl;
    cout << "value of tail: " << tail->data << endl;
}

void display(node* &head){
    node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;    
}

int main()
{
    /*
    Jaak er ager je file ta banaichilam linked list er oitate ami tail use kori nai. but ei tate dekhi tai use kore kivabe aro esily kora jay. karon tail thakle
    last e insertion and deletion easy hoy. ar etto kosto kore pura list traverse korte hoy na.
    */

    //accha eikhaner noyom ta hocche pointer dia create korar. eita dynamic memory allocation
    // struct node *head = new node(12);
    // node *head = new node(12);

    // //non-dynamic object; following both are correct
    // node object{23};
    // node object = node(23);

    node* head = new node(12);
    node* tail = head;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 4);
    display(head);
    headTail(head, tail);

    insertAtTail(tail, 20);
    display(head);
    headTail(head, tail);

    /*
    Ki ar mone hoy? ar ki ei head tail nia kahini korte hoibo? ashole head ar tail loiya kono kahini nai. just eitokuoi je tail er onekta pera ache. abar kichu
    advantages o ache jemon last e insert kora easy. abar tail thakle extra space toh khay e.
    */
    return 0;
}