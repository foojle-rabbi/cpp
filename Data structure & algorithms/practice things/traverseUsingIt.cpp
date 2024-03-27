#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //construtor:
    node(int data) : data(data), left(nullptr), right(nullptr) {}
};

node* buildTree(void){
    cout << "Enter the root value: ";
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }

    node* root = new node(data);
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter the left child value of: " << temp->data << endl;
        cin >> data;
        if(data == -1){
            temp->left = NULL;
        }else{
            node* newNode = new node(data);
            temp->left = newNode;
            q.push(newNode);  
        }

        //do it same for the right child
        cout << "Enter the right child value of: " << temp->data << endl;
        cin >> data;
        if(data == -1){
            temp->right = NULL;
        }else{
            node* newNode = new node(data);
            temp->right = newNode;
            q.push(newNode);       
        }
    }
    return root;
}

void display(node* root){
    if(root == nullptr){
        return;
    }
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}

void inorderIterators(node* root){
    if(root == NULL){
        return;
    }

    stack<node*> s;

    while(root != NULL || !s.empty()){
        while(root != NULL){
            s.push(root);
            root = root->left;
        }

        root = s.top();
        s.pop();

        cout << root->data << " ";
        root = root->right;
    }
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

int main()
{
    node* root = buildTree();
    // display(root);
    inorderIterators(root);

    cout << endl << "Birnay tree is: " << isBst(root) << endl;
    return 0;
}

// input string: 3 1 5 2 -1 -1 -1 -1 -1