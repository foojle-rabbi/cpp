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

void buildTree(node* &root){
    cout << "Enter the root node value: ";
    int val;
    cin >> val;

    if(val == -1){
        return;
    }

    root = new node(val);

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter the left child value of " << temp->data << endl;
        cin >> val;

        if(val == -1){
            temp->left = NULL;
        }else{
            node* newNode = new node(val);
            temp->left = newNode;
            q.push(newNode);
        }

        // same for right node
        cout << "Enter the right child value of " << temp->data << endl;
        cin >> val;

        if(val == -1){
            temp->right = NULL;
        }else{
            node* newNode = new node(val);
            temp->right = newNode;
            q.push(newNode);
        }
    }
}

void display(node* root){
    if(root == NULL){
        return;
    }

    display(root->left);
    cout << root->data << " ";
    display(root->right);
}

// maximum height of a tree;
int maxHeight(node* root){
    if(root == nullptr){
        return 0;
    }

    int leftPart = maxHeight(root->left);
    int rightPart = maxHeight(root->right);

    int ans = max(leftPart, rightPart) + 1;
    return ans;
}

/*
Do a dry run of this code you will get understand it. the code is very simple cause there's using recursive function. 
তোহ ম্যাক্সিমাম অফ বাইনারি ট্রি এর কোশ্চেন সলভ করার জন্য আমাদের রিকারশন এর ইউস করতে হবে। কারন ট্রি মানেই মনে হয় রিকারশন। এই পর্যন্ত যা ই করছি ট্রি রিলেটেড তার বেশির ভাগ ই করা 
হইছে রিকারশন এর ব্যাবহার কইরা। আচ্ছা যাই হোক ঐটা এইখানে বলতে আসি নাই এইখানে আমি বাইনারি ট্রি এর ম্যাক্সিমাম হাইট কিভাবে বের করে সেইটা দেখতে আসছি তোহ মনে করলাম আমি রুট নোডে 
আছি। তাই আমি রিকারশন রে কমু ভাই আমি জানি না তুমি কেমনে বাহির করবা বাট তুমি আগে লেফট সাবট্রি এর হাইট আনো। তার পর রিকারশন রে কমু ভাই তুমি রাইট সাবট্রি এর হাইট ও বাহির কইরা 
আনো। তারপর কমু এই দুইটারে যোগ করো। আর সাথে আমারেও যোগ করো। কারন আমি যেহেতু রুট নোড তাই আমার নোডের কাউন্ট ও তো রাখা লাগবে। 
*/

int main()
{
    node* root;
    buildTree(root);
    display(root);

    cout << endl << "Maximum height of this tree is: " << maxHeight(root) << endl;

    // input string: 9 2 5 1 8 -1 3 -1 -1 -1 -1 -1 7 -1 5 -1 -1
    return 0;
}