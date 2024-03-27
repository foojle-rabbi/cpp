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

//Inorder using itrators 
void inorderIt(node* root){
    if(root == nullptr){
        return;
    }

    stack<node*> s;
    // s.push(root); ekhane vul hocche gia queue er moto first stack e push korbe na.

    while(!s.empty() || root != nullptr){ // 
    // while(root != nullptr || !s.empty()){ // 
        while(root != nullptr){
            s.push(root);
            root = root->left;
        }

        // //first pop the value and print it
        // node* temp = s.top();

        //no brother eikhane vul hoiche ki tomare temp neoyar doarkar nai. just tumi root er abar back korar jonno rooot e data nia aso.
        root = s.top();
        s.pop();

        cout << root->data << " ";

        //ekhon root ke right e nia jao
        root = root->right;
    }
}
int main()
{
    node* root = nullptr;
    takeInput(root);

    cout << "Inorder traversa: ";
    inorder(root);
    cout << endl;

    cout << "Inorder traversal using itrator: ";
    inorderIt(root);
    return 0;
}

// input string: 10 23 15 -13 48 3 13 16 84 -1

/*
Vai ekta jinish realize korlam ei je coding er jei kahini eita pray e vuila jai ga. koykdin ager kora code e vuila jai ga. koyekdin age jei code ba problem er logic
nije nije ber kore solve kore felechi sheita jodi ekhon aisha dhori taile keno. jani vuila jaiga. mane logic mone korte pari na. pore gia amar previous code dekhte 
hoy na hoy chatgpt use korte hoy.

but but ekta jinsh eitao sotti je emon previous code revise dile logic strong hoy. concept clear hoy. 

ar previous code er kotha jeehtu koitecheos. tai ami komu vai code korar shomoy ba jokhon kono ekta problem solve koroch thik tokhoni side e comment kore rakhbi
ete kore pore bujhte easy hobe. ar jekono problem thakle ba motamot thake rekhe rakhbi. tahole pore code tao easy lagbe. 
*/