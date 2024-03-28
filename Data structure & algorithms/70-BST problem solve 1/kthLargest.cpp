#include<iostream>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right; 

    //constructor
    node(int data) : data(data), left(nullptr), right(nullptr) {}
};

//first lets create the bst using the iteroators function
void insertInBst(node* &root, int data){
    node* newNode = new node(data);

    //check that if the root is nullptr. menas the tree is empty
    if(root == nullptr){
        root = newNode;
        return;
    }

    //ekhon jehetu eikhane ashte tai 2 ta node create koro track rakhar jonno
    node* temp = root;
    node* prev = nullptr;

    while(temp != nullptr){
        //set prev to temp for tracking
        prev = temp;

        //now chek if the inseting valus is less then temp->data
        if(data <= temp->data){
            temp = temp->left;
        }else{
            temp = temp->right;
        }
    }

    //loop shesh korcho mane ekhon temp null e point korteche ar prev node e point korteche. toh dekho je previous er left e insert korba naki right e?
    if(data <= prev->data){
        prev->left = newNode;
    }else{
        prev->right = newNode;
    }
}

void takeInput(node* &root){
    int data;
    cin >> data;

    while (data != -1)
    {
        insertInBst(root, data);
        cin >> data;
    }
    
}

void inorder(node* root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// -----------------------------------
int kthLargest(node* root, int k, int &i){
    if(root == nullptr){
        return -1;
    }

    //vai eikhane toh amar code e vul ache!!. amar kthLargest toh value return kobe but ami oitare store koratiechina!!
    int left = kthLargest(root->left, k, i);
    if(left != -1){
        return left;
    }

    //thak vai ekhon matha nosto koira laav nai. age namaz poira aaay then matha thanda koira problem gula solve kor. 
    //ekhon apatoto skip korlam but not permanently cause i will be back soon. 
    return kthLargest(root->right, k, i);
    i++;
    if(i == k){
        return root->data;
    }
}

int main()
{
    int i = 0;

    node* root = nullptr;
    takeInput(root);

    inorder(root);

    cout << kthLargest(root, 3, i) << endl;

    /*
    Eikhane ekta kotha ache ei je jodi amra morris traversal use kori taile amader space complexity kome jabe. mane space complexity chole
    ashbe O(1);
    */
    return 0;
}

// input string: 10 23 15 -13 48 3 13 16 84 -1