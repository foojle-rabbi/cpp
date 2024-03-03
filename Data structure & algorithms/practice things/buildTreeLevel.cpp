#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int data) : data(data), left(nullptr), right(nullptr) {}
};

void buildTreeLevel(node* &root){
    cout << "Enter the root value: ";
    int data;
    cin >> data;
    if(data == -1){
        return;
    }

    root = new node(data);
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter the left child value for: " << temp->data << endl;
        cin >> data;
        if(data == -1){
            temp->left = NULL;
        }else{
            node* newNode = new node(data);
            temp->left = newNode;
            q.push(newNode);
        }

        // do it for the right side also
        cout << "Enter the right child value for: " << temp->data << endl;
        cin >> data;
        if(data == -1){
            temp->right = NULL;
        }else{
            node* newNode = new node(data);
            temp->right = newNode;
            q.push(newNode);
        }
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

int main()
{
    node* root;
    buildTreeLevel(root);
    inOrder(root);
    return 0;
}