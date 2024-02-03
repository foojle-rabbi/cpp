#include<iostream>
#include<vector>
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
    cout << "Elements of List: ";
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

bool isPlaindrome(node* head){
    vector<int> arr;
    while(head != NULL){
        arr.push_back(head->data);
        head = head->next;
    }

    int s = 0;
    int e = arr.size() -1;
    while(s <= e){
        if(arr[s++] != arr[e--]){
            return false;
        }
    }
    return true;
}

int main()
{
    /*
    Okay first approch is pretty easy and clean to understand casue we know how check if an array is palindrome. so we will apply that logic to check if the 
    list is palindrome or not. for this first we need to traverse the whole list and then put the element into an array. then apply the isPalindrome logic to
    that array. Thats it. 
    */

    node* head = new node(1);
    insertAtLast(head, 2);
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 1);
    display(head);

    if(isPlaindrome(head)){
        cout << "List is palindrome" << endl;
    }else{
        cout << "List is not Palindrome" << endl;
    }
    return 0;
}