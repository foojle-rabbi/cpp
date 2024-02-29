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

node* buildTree(){
    int data;
    cout << "Enter the data: ";
    cin >> data;

    if(data == -1){
        return NULL;
    }   

    node* newNode = new node(data);

    cout << "Enter the left value of: " << data << endl;
    newNode->left = buildTree();
    cout << "Enter the right vlaue of: " << data << endl;
    newNode->right = buildTree();

    return newNode;
}

void preOrder(node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    node* root = buildTree();
    preOrder(root);
    return 0;
}

//input string: 5 8 4 -1 -1 2 -1 -1 3 -1 9 -1 -1