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
//Ashole eikahen ami temon kono major vul kri nai. just nije nije variable name vul lekhchi temp er jay gay root use kore felechi.
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

    int levelSize;
    while(!q.empty()){
        levelSize = q.size();

        for(int i = 0; i < levelSize; i++){
            node* temp = q.front();
            q.pop();

            //now print the temporary nodes value
            cout << temp->data << " ";

            //eibar left child re push koro jodi thake
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
    // node* root = buildTreeRec();
    node* root;
    buildTree(root);

    inOrder(root);
    // buildTree(root);
    levelOrder(root);

    // input string: 10 3 2 -1 -1 17 -1 -1 7 -1 9 -1 -1
    return 0;
}