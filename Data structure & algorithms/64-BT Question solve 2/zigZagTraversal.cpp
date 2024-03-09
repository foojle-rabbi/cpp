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
    int data;
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

        cout << "Enter the left child value of: " << temp->data << endl;
        cin >> data;
        if(data == -1){
            temp->left = nullptr;
        }else{
            node* newNode = new node(data);
            temp->left = newNode;
            q.push(newNode);
        }

        //for the right subtree
        cout << "Enter the right child value of " << temp->data << endl;
        cin >> data;
        if(data == -1){
            temp->right = nullptr;
        }else{
            node* newNode = new node(data);
            temp->right = newNode;
            q.push(newNode);
        }
    }
}

//vai eitao jaina rakh je eita deque dia o solve kora jay. but ami ektu beshi pechaiya laichi. 
// here's a solution : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/solutions/1134638/c-deque/
void zigZag(node* root){
    if(root == nullptr){
        return;
    }

    deque<node*> q;
    q.push_back(root);
    int levelNumber = 0;

    while(!q.empty()){
        int levelSize = q.size();
        
        for(int i = 0; i < levelSize; i++){
            node* temp;

            bool left2right = (levelNumber % 2) == 0;

            if(left2right){
                temp = q.front();
                q.pop_front();
            }else{
                temp = q.back();
                q.pop_back();
            }

            cout << temp->data << " ";

            // //left subtree check
            // if(temp->left){
            //     if(left2right){
            //         q.push_back(temp->left);
            //     }else{
            //         q.push_front(temp->left);
            //     }
            // }

            // if(temp->right){
            //     if(left2right){
            //         q.push_back(temp->right);
            //     }else{
            //         q.push_front(temp->right);
            //     }
            // }
            // if(left2right){
            //     if(temp->left){
            //         q.push_back(temp->left);
            //     }
            //     if(temp->right){
            //         q.push_back(temp->right);
            //     }
            // } else {  // Right subtree check
            //     if(temp->right){
            //         q.push_front(temp->right);
            //     }
            //     if(temp->left){
            //         q.push_front(temp->left);
            //     }
            // }
            if(temp->left){
                    q.push_back(temp->left);
                }

                if(temp->right){
                    q.push_back(temp->right);
                }
            }
            levelNumber++;
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


//vai hudda huddin etokkhon kotto kichu try korlam khub easy ekta solution dekhlam lets implement it
void zigZagTraversal(node* root){
    if(root == nullptr){
        return;
    }
    /*
    Accha vai jaak apatoto code korlam na casue ami leetcode e ei problem er alredy solution submission koira aichi. but eita bolte chai je vai eita pura amadr
    level order traversal er logic. but but ek ta jaygay khali ektu difference. ar sheita holo gia amra jokhon amader final ans er moddhe push korbo tokhon 
    protita joor er jonno normally push korbo. but odd number of level er jonno first e reverse korbo then oitare push korbo. 

    simple and easy ans;
    */
}
int main()
{
    //spiral print
    node* root;
    buildTree(root);
    inorder(root);
    cout << endl;
    zigZag(root);

    //an importannt kotha valo kore shon. eikahne toh tui vector re reverse kore ans push_back() korchot but tui ki emon ta korte parbi
    // na je jate kore ekta left to right ar arekta right to left push hoy. jemon ta koira aichi amra lecture number 62 er moddhe 3 number
    // file level order traversal e. Try that method

    return 0;
}

//input string: 1 2 3 4 5 -1 6 -1 -1 -1 -1 -1 -1