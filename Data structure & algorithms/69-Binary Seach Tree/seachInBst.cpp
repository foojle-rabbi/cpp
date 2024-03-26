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

//first lets create the bst using the iteroators function
void insertInBst(node* &root, int data){
    node* newNode = new node(data);

    //check that if the root is nullptr. menas the tree is empty
    if(root == nullptr){
        root = newNode;
        return;
    }

    //ekhon jehetu eikhane ashte tai 2 ta node create koro track rakhar jonno
    node* temp = root;
    node* prev = nullptr;

    while(temp != nullptr){
        //set prev to temp for tracking
        prev = temp;

        //now chek if the inseting valus is less then temp->data
        if(data <= temp->data){
            temp = temp->left;
        }else{
            temp = temp->right;
        }
    }

    //loop shesh korcho mane ekhon temp null e point korteche ar prev node e point korteche. toh dekho je previous er left e insert korba naki right e?
    if(data <= prev->data){
        prev->left = newNode;
    }else{
        prev->right = newNode;
    }
}

void takeInput(node* &root){
    int data;
    cin >> data;

    while (data != -1)
    {
        insertInBst(root, data);
        cin >> data;
    }
    
}

void inorder(node* root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//__________________________
node* searchInBstRec(node* root, int key){
    if(root == nullptr){
        return nullptr;
    }

    while(root != nullptr){
        if(root->data == key)
        {
            return root;
        }
        else if(root->data < key){
            return searchInBstRec(root->right, key);
        }
        else{
            return searchInBstRec(root->left, key);
        }
    }
}

node* searchInBstIt(node* root, int key){
    while(root != nullptr){
        if(root->data == key)
        {
            return root;
        }
        else if(root->data < key){
            root = root->right;
        }
        else{
            root =  root->left;
        }
    }

    //ei porjonto ashcho tar mane vluae khuija pao nai tai return kono null
    return nullptr;
}

int main()
{
    // there are 2 ways of seach 
    //     1. recursion way
    //     2. iteration way

    node* root = nullptr;
    takeInput(root);

    // node* temp = searchInBstRec(root, 1000);
    node* temp = searchInBstIt(root, -5);

    if(temp == nullptr){
        cout << "Value is not found" << endl;
    }else{
        cout << "value is found" << endl;
    }
    return 0;
}
//input string:  5 10 15 20 15 12 -5 21 -10 31 -1
// input string2: 42 35 15 5 20 12 -1