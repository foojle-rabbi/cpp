#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor:
    node(int data) : data(data), left(nullptr), right(nullptr) {}
};

node* buildTree(void){
    int data;
    cout << "Enter the data: ";
    cin >> data;

    if(data == -1){
        return NULL;
    }

    node* newNode = new node(data);
    cout << "Enter the left child value of : " << data << endl;
    newNode->left = buildTree();

    cout << "Enter the right child value of : " << data << endl;
    newNode->right = buildTree();

    return newNode;
}

void inOrder(node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void levelOrder(node* root){
    if(root == NULL){
        return;
    }

    queue<node*> q;
    q.push(root);
    int levelSize;

    while(!q.empty()){
        levelSize = q.size();

        for(int i = 0; i < levelSize; i++){
            node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
        cout << endl;
    }
}

int main()
{
    //in order er moddhe amader jei root node ache tar value majhe takbe. orthat leff root right.
    node* root = buildTree();
    inOrder(root);

    levelOrder(root);
    return 0;
}

//input string: 5 3 12 10 -1 -1 -1 9 4 -1 -1 -1 8 11 -1 -1 7 13 -1 -1 19 -1 -1