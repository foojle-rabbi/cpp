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

void buildTreeLevel(node* &root){ // ar hoo eikhane amake as a referece nite hobe nahole program thik moto kaaj korbe na!!
    cout << "Enter the value of root node: ";
    int data;
    cin >> data;
    
    //check if the number is -1 then return with null no need to assign any value;
    //orthat jehetu user -1 diche er mane eitar moddhe she kono value rakhte chay na. tai return koira de;
    if(data == -1){
        return;
    }
    // ar user jodi -1 na dia onno kono value dia thake tahole oi value er cossesponde ekta node create koira oitar moddhe value assign kore deo;
    root = new node(data);

    queue<node* > q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        //Eikhane left child er jonno value nitechi
        cout << "Enter the left child value for " << temp->data << endl;
        cin >> data;

        if(data == -1){
            temp->left == NULL;
        }else{
            node* newNode = new node(data);
            //new node create korar por temp er left e oi new node tare linked korte hobe
            temp->left = newNode;
            q.push(newNode);
        }

        //Taking input for right child
        cout << "Enter the right child value for " << temp->data << endl;
        cin >> data;

        if(data == -1){
            temp->right == NULL;
        }else{
            node* newNode = new node(data);
            temp->right = newNode;
            q.push(newNode);
        }
    }

}

void display(node* root){
    if(root == NULL){
        return;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        //first e ei level er size ta nia neo jate kore joto ta node ache toto ta jate loop chalate paro
        int levelSize = q.size();

        //ekhon ekta loop chalabo level er size onujayi
        for(int i = 0; i < levelSize; i++){
            //first e ekta temporay variable nia neo jate kore queue theke pop kore oi node tare rakhte paro
            node* temp = q.front();
            q.pop();

            //ekhon oi node tar value print koro
            cout << temp->data << " ";

            //value jehetu print korcho eibar dekho je eitar left e kono child ache kina? jodi thake tahole left child reo queue te push koro. ar na thakle skip.
            if(temp->left){
                q.push(temp->left);
            }

            //thik same vabe right side e o check koro je kno child ache kina? jodi thake eitareo queue te push koro. 
            if(temp->right){
                q.push(temp->right);
            }
        }
        //ekhon jehetu loop shesh hoiche tar mane oi level e joto gula node chilo tader kaj shesh tai ekhon ekta new line print korar jonno endl deo;
        cout << endl;
    }
}

void pathFinder(node* root, int val, vector<int> &ans, vector<int> &currentPath){
    if(root == nullptr){
        return;
    }
    
    currentPath.push_back(root->data);
    if(root->data == val){
        ans = currentPath;
        return;
    }

    /*
    Finally path finder is working fine
    */
    pathFinder(root->left, val, ans, currentPath);
    pathFinder(root->right, val, ans, currentPath);

    currentPath.pop_back();
}
int main()
{
    /*
    Accha eita kono lecture er question na ami just nijer moto kore eitake solve korar chesta kortechi. mane amar mathay hothat ekta question asholo je vai kono
    node er path kivabe ber kore? is it simple or hard. Or how to solve that problem. how to find the path.

    Form the following tree lets say i want to find the 8th node path. Vai ki je komu kotha karon ekhon keno jani thik Focus e korte partechi na kono kichur upor
    emon korle toh hobe nare vai emon korle toh hobe na.
    */

    node* root;
    buildTreeLevel(root);
    display(root);

    //input string: 9 1 5 7 3 8 -1 -1 -1 -1 -1 -1 -1
    vector<int> ans;
    vector<int> currentPath;
    pathFinder(root, 8, ans, currentPath);

    cout << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}