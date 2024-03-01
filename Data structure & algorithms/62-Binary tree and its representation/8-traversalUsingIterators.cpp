#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }

    //lets check if i could make another constructor
    node(void){
        this->left = NULL;
        this->right = NULL;
    }
};

//first lets write a function to create a tree using level order 
void buildTree(node* &root){
    int data;
    cout << "Enter the value for root node: ";
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

        //input the right child value. if user input's -1 then inisialize it with nullptr;
        cout << "Enter the left child value of: " << temp->data << endl;
        cin >> data;
        if(data == -1){
            temp->left = NULL;
        }else{
            node* newNode = new node(data);
            temp->left = newNode;
            q.push(newNode);
        }

        // same will happen for right child
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

// You cn write a traverse function

void traverseUsingIterator(node* root){
    stack<node*> s;

    while(root != nullptr || !s.empty()){
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

void iterateTraverse(node* root){
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

void preOrder(node* root){
    stack<node*> s;

    while(root != NULL || !s.empty()){
        while(root != NULL){
            cout << root->data << " ";
            s.push(root);
            root = root->left;
        }
        root = s.top(); 
        s.pop();

        root = root->right;
    }
}

//thak vai pre ar in order gula korchi but eita keno jani ekhon korar mood e nai tai eita ar ekhon korlam na. eita ekhono shesh hoy nai pore solve korbo inshaa-allah.
void postOrder(node* root){
    stack<node*> s;

    while(root != NULL || !s.empty()){
        while(root != NULL){
            s.push(root);
            root = root->left;
        }

        root = s.top();
        s.pop();

        root = root->right;

        cout << root->data << " ";
    }
}

int main()
{
    /*
    etokkhon toh recursion dia traverse korla eibar iterators dia dekho ki vabe traverse korte hoy. 
    */ 

    /*
    node* temp;
    node* temp2(12);

    can you tell me whats the differents between 
    node* temp = new node(12);
    and 
    node* temporary;
    cant i write 


    node* temporary(43); ?

    okay suppose i declare a pointer
    node* ptr;
    now my question is will it invoke the constructor? if not then what will the values of data left and right?
    
    -------------------------------
    accha etokkhon ja shikhlam ta hoilo gia je, ami jodi normally stack e value initialize korte chai tahole amake stak e noraml pointer bad dia declare korte
    hoibo orthat:
            node temp(12);
            ei ta stack e ekta temp node create korbe zar value hobe 12; tobe eita dynamically noy just statically. 

    ar ami jodi ei vabe boli je: node* temp(12) ; eita amar vul hobe; karon dynamically allocate korte hobe aage amare new keyword use korte hobe. na hole error
    throw korbe. 

    */ 

    node* root; 
    // buildTree(root);
    /*
    Eikhane emon fancy build tree function call na koira tumi chaile nije nije eigula re liked up korte paro mane tree build korte paro she kkhetre protibar 
    run korar por tomake ar gada gada koira input dite hoibo na. 
    */
    //lets build tree manually
    node* newNode[6];
    newNode[0] = new node(3);
    newNode[1] = new node(5);
    newNode[2] = new node(7);
    newNode[3] = new node(1);
    newNode[4] = new node(2);
    newNode[5] = new node(9);

    //lets link them 
    newNode[0]->left = newNode[1];
    newNode[0]->right= newNode[4];

    newNode[1]->left = newNode[2];
    newNode[1]->right = newNode[3];
    newNode[2]->left = NULL;
    newNode[2]->right = NULL;

    newNode[3]->left = NULL;
    newNode[3]->right = NULL;

    newNode[4]->left = nullptr;
    newNode[4]->right = newNode[5];

    newNode[5]->left = NULL;
    newNode[5]->right = NULL;

    root = newNode[0];

    traverseUsingIterator(root);
    cout << endl;
    preOrder(root);

    cout << endl;
    postOrder(root);
    return 0;
}