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
    // node(int data){
    //     this->data = data;
    //     this->left = NULL;
    //     this->right = NULL;
    // }
};

node* buildTree(void){
    int data;
    cout << "Enter the value: ";

    cin >> data;
    if(data == -1){
        return NULL;
    }
    node* newNode = new node(data);

    cout << "Enter the left value for: " << data << endl;
    newNode->left = buildTree();
    
    cout << "Enter the right value for: " << data << endl;
    newNode->right = buildTree();
    
    return newNode;
}

void levelOrderWithNewLine(node* root){
    if(root == NULL){
        return;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();
        
        for(int i = 0; i < levelSize; i++){
            node* temp = q.front();
            q.pop();

            // print the value: 
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

void LevelOrderTraversal(node* root){
    if(root == NULL){
        return;
    }

    queue<node*> Q;
    Q.push(root);

    while(!Q.empty()){
        node* temp = Q.front();
        Q.pop();

        //print the value:
        cout << temp->data << " ";
        //push the left child / node if exits
        if(temp->left){
            Q.push(temp->left);
        }

        //push the right child / node if exits
        if(temp->right){
            Q.push(temp->right);
        }
    }
}

int main()
{
    node* root;

    root = buildTree();

    // cout << root->left->right->data << endl;
    // cout << root->right->left->data << endl;

    LevelOrderTraversal(root);
    cout << "With new line: " << endl;
    levelOrderWithNewLine(root);
    return 0;
}

//input string: 3 9 5 -1 -1 15 -1 -1 7 10 -1 -1 17 -1 -1