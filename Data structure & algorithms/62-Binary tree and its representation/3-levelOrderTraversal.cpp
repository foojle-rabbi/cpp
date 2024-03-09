#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    //construcotr
    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

Node* buildTree(void){
    int data;
    cout << "Enter the value: ";
    cin >> data;
    
    //check if the vlue is -1 then set it to null
    if(data == -1){
        return NULL;
    }

    Node* newNode = new Node(data);

    /*
    Eikhane ekta notun node create kroar por jiggasha kora hoibo jei vai tumi ei node er left e ki onno kono value dite chao. jodi dite chao taile vai oi value
    ta enter koro. ekhon jodi oi value ta -1 hoy tar mane ei khane tmi kono node na dia just null point koira deo. 

    thik eki vabe right er jonno o user ke ask koro je ki value dite chay. jodi -1 chara onno value hoy taile ekta notun node create koira oitar address return kro 
    ar jodi -1 dey tar mane oitar moddhe tumi NULL point koira deo.
    */
    cout << "Enter the left value of " << data << endl;
    newNode->left = buildTree();
    cout << "Enter the right value of " << data << endl;
    newNode->right = buildTree();

    return newNode;
}

void levelOrder(Node* root){
    if(root == NULL){
        return;
    }

    //let declare a queue
    queue<Node*> q;
    q.push(root);
    int levelSize;

    while(!q.empty()){
        levelSize = q.size();

        /*
            Eikhane ami jodi loop ta use na kortam taile eikhane amar prottek ta level shesh houar por notun line asto na mane new line ashto na. kintu jehetu ami
            for loop use korchi tai protibar e amar queue te oi level er shob gula node enqueue hoibo. ar size o tooti hoibo. tai loop ta shesh hoyar por e ekta 
            new endl asiha porbo.
        */
        for(int i = 0; i < levelSize; i++){
            Node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            //enqueue if the node has left child
            if(temp->left){
                q.push(temp->left);
            }

            //enqueue if the node has right child too
            if(temp->right){
            q.push(temp->right);
            }
        }
        cout << endl;
    }
}

//first push right subtree
/*
Aree eikhne kahini hoiche ta ki je ami chacchi je ei je level order traversal ache na eikhane toh amar left to right level wise print hoy tai na? toh ekhon eita 
aisha dekhlam je amar ulta orthat right to left ki print kora jay kina? 

Do you what, print kora jay. just age queue te left push na koira just right push korlei hobe
*/
void levelOrderRev(Node* root){
    if(root == NULL){
        return;
    }

    //let declare a queue
    queue<Node*> q;
    q.push(root);
    int levelSize;

    while(!q.empty()){
        levelSize = q.size();

        for(int i = 0; i < levelSize; i++){
            Node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            //enqueue if the node has right child too
            if(temp->right){
            q.push(temp->right);
            }

            //enqueue if the node has left child
            if(temp->left){
                q.push(temp->left);
            }
        }
        cout << endl;
    }
}

int main()
{
    Node* root = buildTree();
    cout << endl;
    levelOrder(root);
    cout << endl;
    levelOrderRev(root);
    return 0;
}

//input string: 5 8 4 -1 -1 2 -1 -1 3 -1 9 -1 -1