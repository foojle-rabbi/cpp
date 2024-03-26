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

int minInBst(node* root){
    if(root == nullptr){
        return -1;
    }

    // node* prev = root;
    // while(root != nullptr){
    //     prev = root;
    //     if(root->left)
    //         root = root->left;
    //     else
    //         root = root->right;
    // }

    // return prev->data;

    // I think ami uporer code er moddhe vul lekhechi. 
    //hmm as i say ami vul lekhechi karon eikhane amar right node er toh kono dorkar nai. ami shudhu left most vlaue dekhbo.
    // node* prev = root; taile toh amar previous pointer er o dorkar hoy na.
    while(root->left != nullptr){
        root = root->left;
    }

    return root->data;
}

int maxInBst(node* root){
    if(root == nullptr){
        return -1;
    }

    while(root->right != nullptr){
        root = root->right;
    }

    return root->data;
}

int main()
{
    /*
    kono ekta bst te minimum value ar maximum value ber kora onek easy. kraon shob shomoy kono ekta bst te er left subtree leaf node tai hocche minimum value.
    ar thik same vabe kono bst er right subtree er last leaf node tai hocche maximum vlaue;
    */

    node* root = nullptr;
    takeInput(root);

    cout << "Min value: " << minInBst(root) << endl;
    cout << "max value: " << maxInBst(root) << endl;
    return 0;
}
//input string:  5 10 15 20 15 12 -5 21 -10 31 -1
// input string2: 42 35 15 5 20 12 -1