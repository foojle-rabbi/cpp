#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //construcotr
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(void){
    int data;
    cout << "Enter data: ";
    cin >> data;
    if(data == -1){
        return NULL;
    }

    Node* newNode = new Node(data);

    cout << "Enter the left value of: " << data;
    newNode->left = buildTree();

    cout << "Enter the right value of: " << data;
    newNode->right = buildTree();

    return newNode;
}

void levelOrder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int levelSize = q.size();

        for(int i = 0; i < levelSize; i++){
            Node* temp = q.front();
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

void postOrder(Node* root){
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    // input string: 9 2 3 -1 -1 11 -1 -1 5 -1 17 -1 -1
    Node* root = buildTree();
    cout << endl;

    cout << "Level Order Traversal: " << endl;
    levelOrder(root);
    cout << endl;

    cout << "In Order Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Post Order Traversal: ";
    postOrder(root);
    cout << endl;

    cout << "Pre Order Traversal: ";
    preOrder(root);
    cout << endl;
    return 0;
}