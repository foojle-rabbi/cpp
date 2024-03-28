#include<iostream>
#include<stack>
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

    //check that if the root is nullptr. means the tree is empty
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

bool isBst(node* root){
    if(root == nullptr){
        return false;
    }

    stack<node*> s;
    node* prev = nullptr; //first e null initialize korte hobe!
    
    while(root != nullptr || !s.empty()){
        while(root != nullptr){
            s.push(root);
            root = root->left;
        }

        root = s.top();
        s.pop();

        // if(prev != nullptr){
        //     prev = root;
        //     root = root->right;

        //     if(prev->data > root->data)
        //         return false;
        // }
        //jodi tomar prev node thake tokhon e toh tmi check korba je boro kina
        if(prev != nullptr && prev->data > root->data){
            return false;
        }

        prev = root;
        root = root->right;
    }
    return true;
}
//eita gelo amader chatgpt moshai er code ba logic ba approach. babbar miar logic code roiche. onar 2 ta approach chilo. ekta chilo vectore er maddhome
// ar arekta chilo minus infinity theke + infinity projonto.

bool isBST(node* root, int min, int max){
    //first base case
    if(root == nullptr){
        return true;
    }

    if(root->data > min && root->data < max){
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);

        return (left && right);
    }else{
        return false;
    }
}
int main()
{
    /*
    Accha eitate ami chaile ki inorder er jei approach sheta use kroche parbo na? 
    nah vai tmi jeivabe korar kotha boltecho oivabe hobe na karon tomake kintu previous root node er track rakhte hobe. 
    */
    node* root = nullptr;
    takeInput(root);
    cout << "Elements of tree: ";
    inorder(root);

    cout << endl << "Birnay tree is: " << isBST(root, INT8_MIN, INT8_MAX) << endl;

    return 0;
}