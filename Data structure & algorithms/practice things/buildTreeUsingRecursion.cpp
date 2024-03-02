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

void buildTree(node* &root){
    cout << "Enter the value: ";
    int data;
    cin >> data;

    //check if the value of data is -1; if the value is -1 then set it with null ptr
    if(data == -1){
        root = NULL;
        return;
    }

    root = new node(data);

    //ekhon left side er jonno data neo;
    cout << "Enter the left child value of: " << data << endl;
    buildTree(root->left);

    //take the vlaue for right side child
    cout << "Enter the right child value of: " << data << endl;
    buildTree(root->right);
}

//i dont know how but i made a mistake on that code. lets write again
node* buildTreeRec(void){
    cout << "Enter the data: ";
    int data;
    cin >> data;
    
    if(data == -1){
        return NULL;
    }

    node* newNode = new node(data);

    cout << "Enter the left child value of: " << data << endl;
    newNode->left = buildTreeRec();

    cout << "Enter the right child value of: " << data << endl;
    newNode->right = buildTreeRec();

    return newNode;
}

void levelOrder(node* root){
    if(root == NULL){
        return;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int numberOfnodes = q.size();

        for(int i = 0; i < numberOfnodes; i++){
            node* temp = q.front();
            q.pop();

            //now print the temporary nodes value
            cout << temp->data << " ";

            //eibar left child re push koro jodi thake
            if(temp->left){
                q.push(temp->right);
            }
            
            if(temp->right){
                q.push(root->right);
            }
        }   
        cout << endl;
    }
}

int main()
{
    node* root = buildTreeRec();
    // buildTree(root);
    levelOrder(root);

    // input string: 10 3 1 -1 -1 17 -1 -1 7 -1 9 -1 -1 
    return 0;
}