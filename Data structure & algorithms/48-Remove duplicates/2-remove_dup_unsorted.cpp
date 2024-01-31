#include<iostream>
#include<vector>
#include<map>
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

//---------------- Let's sort a linked list -------------------
void sortList(node* &head){
    node* temp = head;
    //my matha is not working for now maybe i will think about this problem later
}

//-------------------- 1st solution ----------------------------
// void firstSol(node* &head){
//     node* current = head;
//     node* forward;
//     while(head != NULL){
//         if(head->next != NULL)
//             forward = head->next;

//         while(forward != NULL){
//             if(current->data == forward->data){
//                 node* nodeToDelete = forward;
//                 current->next = forward->next;
//                 delete forward;
//             }else{
//                 forward = forward->next;
//             }
//         }
//         current = current->next;
//     }
// }

void firstSol(node* &head){
    node* temp = head;
    node* prev = NULL;
    // node* temp2 = head->next;
    node* temp2 = NULL;

    while(temp != NULL){
        prev = temp;
        temp2 = temp->next;
        // cout << "temp is now on : " << temp->data << endl;
        while(temp2 != NULL){
            // cout << "temp2 is now on : " << temp2->data << endl;
            // cout << "prev is now on : " << prev->data << endl;
            
            if(temp->data == temp2->data){
                // cout << "temp and temp2 values are same: " << temp->data << " " << temp2->data << endl;
                prev->next = temp2->next;
                delete temp2;
                temp2 = prev->next;
            }else{
                temp2 = temp2->next;
            prev = prev->next;
            }
        }
        temp = temp->next;
    }
}

//-------------------- 2nd solution ----------------------------
/*
    As i told back then that the 2nd approch needs to sort the list first then apply the previous "remove duplicates form a sorted list ";
    but the problem is for now is that i dont know how to sort a list that why i cant solve this prolem right now. maybe later i will find out this solution
*/

//-------------------- 3rd solution ----------------------------
void thirdSol(node* &head){
    map <int, bool> isPresent;
    node* temp = head;
    node* prev = head;

    isPresent[temp->data] = true;
    temp = temp->next;
    while(temp != NULL){
        if(isPresent[temp->data] != true){
            isPresent[temp->data] = true;
            prev = prev->next;
            temp = temp->next;
        }else{
            prev->next = temp->next;
            delete temp;
            temp = prev->next;
       }
    }
}

void bubbleSort(vector<int> &arr){
    int n = arr.size();

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j <= i - 1; j++){
            if(arr[i] < arr[j])
            swap(arr[i], arr[j]);
        }
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
    insertAtFirst(head, 9);
    insertAtFirst(head, 3);
    insertAtFirst(head, 5);
    insertAtFirst(head, 1);
    insertAtFirst(head, 4);
    display(head);

    thirdSol(head);
    display(head);

    // vector <int> arr = {1, 5, 0, 2, 9, 3};
    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // bubbleSort(arr);
    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    return 0;
}