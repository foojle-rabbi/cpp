#include<iostream>
#include<queue>
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

    node* newNode = new node(data);
    queue<node*> q;
    q.push(newNode);

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

}

void display(node* root){
    if(root == nullptr){
        return;
    }
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}

int main()
{
    node* root = buildTree();
    display(root);
    return 0;
}

// input string: 3 1 5 2 -1 -1 -1 -1 -1