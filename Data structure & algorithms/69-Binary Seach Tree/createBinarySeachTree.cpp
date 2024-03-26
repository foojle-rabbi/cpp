#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int data) : data(data), left(nullptr), right(nullptr) {}
};

/*
Accha eikhane amar jei create bst using recursion eitar modhde bujhte problem hocche. er age ami jokhon insert function shikhchilam c te tokhon onno vabe mane 
iterator er sahjje korchilam oikahe prev ar current node chilo. but eitar moddhe kora hoiteche recursion er help e ei karone thik moto ekhon apatoto bujhtechi na
but tar mane ei na je ar bujhbo na. kintu ekhon jani kemon lagteche. tai recursion er ta apato skip korlam. 

iterator er ta nia ektu dry run kori.
*/
void insert(node* &root, int data){
    if(root == nullptr){
        root = new node(data);
        return;
    }

    if(data < root->data){
        insert(root->left, data);
        return;
    }else{
        insert(root->right, data);
        return;
    }
}

void insertAtBst(node* &root){
    int data;
    cin >> data;

    //handle the first root node case;
    if(data != -1 && root == nullptr){
        root = new node(data);
    }

    while(data != -1){
        insert(root, data);
        cin >> data;
    }
}


void inOrder(node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

//------------------------ eikhane hocche amar nijer moto kore iterator dia insertion in bst ----------------------------
//dekhi toh vai ami amar moto kore bst build korte pari kina? tobe eikhane ami use korbo iterator er.
void insert2(node* &root, int data){
    /*
    okay vai eto pech nai just normally jeivabe recursion chara iterator er use kore insert kore oitai eikhane dekhbo.
    
    ** vai eikhane arekta kotha ache sheta holo gia amra jani je insertion e bst te logn time ney. toh vai ami jodi sheta recurison er maddhome kori taile seta 
    koto time nibe? 

                40
               /
              7
    suppose this is my a bst now i want to insert 25. so i will be doing that using iterators so there will be 2 pointer one is temp other is prev. now as We 
    know that if i want to insert 25 the value will be on the right side of 7. so first my temp value will be null. cause temp will be go to the 7 nodes right. 
    so prev will be pointing on 7. 

    now my question is is it wrong to set prev = temp? my logic says that 7 nodes right is temp. so if i do prev = temp; will it link to 7 nodes right to the..

    ans: are vai tui nijei dekh tui jodi 25 insert korte jash tokhon kintu temp node jaibo ga 7 node er right e mane null hoiya. ekhon tui jodi newNode = temp; 
    koroch taile toh new node null hoiya jaibo. ar temp er left o toh nai right o toh nai. tai na. 
    */

    //accha ekhon ami jodi code kori taile 
    //first chek koro je amar root ki null kina? jodi null hoy taile toh vai root = new node ar return kore deo.
    node* newNode = new node(data);
    if(root == nullptr){
        root = newNode;
        return;
    }

    //accha eikhane asche mane amar root node null na; so root node null na hole jottokhon porjonto null node pouhcaitacho totokkho loop chalo. 
    // while(root != nullptr); but wiat eikhane ekta tch ache ei je jodi root node nia khanini koro taile toh root re haraiya felba. tai prev ar temp node dorkar.

    node* temp = root;
    node* prev = nullptr;

    while(temp != nullptr){
        //loop er vitore probesh korcho mane tomar tree te onek gula node ache. tai first e tumi prev re temp er sathe point korao jate temp null holeo track tahke.
        prev = temp;
        if(temp->data <= data){
            temp = temp->right;
        }else{
            temp = temp->left;
        }
    }

    // accha loop theke ber hoiba mane emon ekta jay gay ache jekhane prev thakbe oi node ar temp thakbe null node toh ekhon data'r sathe prev er compare koro. jodi 
    // choto hoy taile left e ar na hoy right e;
    
    if(data <= prev->data){
        //jodi data prev er data theke choto othoba equal hoy taile jabe left e ar na hole right e 
        prev->left = newNode;
    }else{
        prev->right = newNode;
    }
}


int main()
{
    node* root = nullptr;
    // insertAtBst(root);
    // inOrder(root);

    int data;
    cin >> data;

    while(data != -1){
        insert2(root, data);
        cin >> data;
    }

    cout << "Inorder traversal"; 
    inOrder(root);
}

// 5 10 43 21 24 67 91 0 12 