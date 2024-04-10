#include<iostream>
#include<stack>
#include<vector>
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
    if(data < prev->data){
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

// ---------------------------------------
void traverseUsingIt(node* root){
    //first check if the node is null
    if(root == nullptr){
        return;
    }

    //now create a stack
    stack<node*> s;

    //ekhon ekta loop chalo jotokkhon porjon stack empty hocche noyto tree null e point korteche
    while(!s.empty() || root != nullptr){
        //ekhon left er shob node stack push koro
        while(root != nullptr){
            s.push(root);
            root = root->left;
        }

        //loop shesh hoile amader rooot left side e null er moddhe point kore thakbe. tai null theke uthanor jonno root ke stack er top element er sathe point korte hobe
        root = s.top();
        s.pop();

        //print or store the value
        cout << root->data << " ";

        //ekhon root re left side jehetu shesh tai right subtree er sathe point koratie hobe.
        root = root->right;
    }
    
}

void getVector(node* root, vector<int> &ans){
    if(root == nullptr){
        return;
    }

    getVector(root->left, ans);
    ans.push_back(root->data);
    getVector(root->right, ans);
}

int getPos(vector<int> ans, int key){
    //ay ha re foje binary seach er implementation o vuila geche
    int left = 0;
    int right = ans.size() -1;

    while(left <= right){
        int mid = (left + right) / 2;

        if(ans[mid] == key){
            return mid;
        }else if(ans[mid] > key){
            right = mid -1;
        }else{
            left = mid + 1;
        }
    }

    return -1;
}

pair<int, int> predSucc(node* root, int key){
    //first approach
    vector<int> ans;
    getVector(root, ans);

    //accha fojle eikhane kintu tui linear seach na lagaiya bianry seach lagaite paroch seaching er jonno;
    int pos = getPos(ans, key);

    // cout << "Position is: " << pos << endl;

    // cout << "Predecessor: " << ans[pos-1] << endl;
    // cout << "successor: " << ans[pos+1] << endl;

    return {ans[pos-1], ans[pos+1]};
}

//accha upoer gula ami bad dei notun kore abar iterator er help e pred and succes ber korar chesta kori. jekhane amar prev and forward lagbe
pair<int, int> inorderPredSucc(node* root, int key){
    if(root == nullptr){return;}

    stack<node*> s;
    node* prev;
    node* forward;

    while(!s.empty() || root != nullptr){
        while(root != nullptr){
            s.push(root);
            prev = root;
            root = root->left;
        }

        root = s.top();
        s.pop();

        //accha apatoto bujhtechi na tai skip korlam. kal abar eitare try marmu. 


    }
}
// input string: 10 23 15 -13 48 3 13 16 84 -1

int main()
{
    /*
    problem ta hocche kono ekta bianry seach tree theke inorder predicessor ar inorder succesor ber korte hobe. toh as we know previously that in a binary
    seach tree suppse you have a iorder traversal like this: 10 14 18 20 35 39 41 50; mone kor eiTa ache ekhon tui cahitechos je 35 er inorder succesor ar inorder 
    predicessor ber korbi. toh predecessor mane pre ar pre mane purbe mane age; toh age kont ache 35 er age ache amader 20; tai predicessor hocche: 20; ar ar 
    successor hobe holo amader 39;
    

    ekhon solve kora jay kivabe. solve korar age mone korto amra delete is bst te emon ekta jinish dekhchilam na je pred ar successor kemone ber korte hoy. kno 
    ekta node er inorder pred hobe er left subtree er shobcheye Maximum element ar succesor hobe right subtree er minimum value; 

    approach 1: eikhane amra ekta vector othoba ekta array create korte pari. then oi vector traverse kore key find kore ager ar porer element return koreli amar
    ans shesh. acccha finally eitar code o korlam ar working successfully but the time and space complexity is high. 

    approach 2: ** accha wait brother tui toh chaile inorder traversal er jei iteration way ache oikhane gia key find korte parosh. ar er porer jei elemtn kivabe 
    ber kore shetar na hoy upay ber kore nili. tai na? ekta try marosh na vai.
    */

    node* root = nullptr;
    takeInput(root);
    inorder(root);
    cout << endl;
    traverseUsingIt(root);
    cout << endl;

    // vector<int> ans;
    // getVector(root, ans);

    // cout << "Elemtns of bst: ";
    // for(auto i : ans){
    //     cout << i << " ";
    // }

    auto ans = predSucc(root, 16);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}

