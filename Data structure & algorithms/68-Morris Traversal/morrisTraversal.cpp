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

void buildBst(node* &root){
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


// ------ actual thing start ---------
node* findPred(node* root){
    if(root == nullptr){
        return nullptr;
    }
    
    while(root->right != nullptr){
        root = root->right;
    }

    return root;
}

// void morrisTraversal(node* root){
//     node* curr = root;

//     while(curr != nullptr){
//         //ekhon left part theke predicessor ber koro if left sub tree exits
//         if(curr->left){
//             node* pred = findPred(curr->left);
//             // pred->left = curr;

//             if(pred->right == nullptr){
//                 pred->right = curr;
//                 curr = curr->left;
//             }else{
//                 curr->right = nullptr;
//                 cout << curr->data << " ";
//             }

//             //
//             curr = curr->right;
//         }else{
//             cout << curr->data << " ";
//             curr = curr->right;
//         }
//     }
// }

void morrisTraversal(node* root){
    node* current = root;

    while(current != nullptr){
        //ekhon check koro je amar left side ache kina
        if(current->left == nullptr){
            cout << current->data << " ";
            current = current->right;
        }else{
            // node* pred = findPred(current->left);
            node* pred = current->left;
            while(pred->right != nullptr && pred != current){
                pred = pred->right;
            }

            if(pred->right == nullptr){
                pred->right = current;
                current = current->left;
            }else{
                pred->right = nullptr;
                cout << current->data << " ";
            }
            current = current->right;
        }
    }
}

//jani na vai keno jani ei code ta amar kaaj korteche na. tai apatoto eitareo skip korte hoilo. but yes i will try it later

int main()
{
    /*
    Accha what is morris traversal? 

    name deikha e bujha jay je eita ekta traversal. toh etodin amra onek kism ka traversal korchi thik shegular motoi eitao ekdhoroner traversal arki. but but
    eikhane ekta advantage sheta holo ei porjono amra joto e traversal korchi tar shob gular moddhei comlexity chilo O(n) ar O(h) where h is the hegiht of the 
    tree ar noy 2 tai O(n) time complexity chilo. 

    ar amra ekhon jei traversal ta shikhbo sheta te one and only jei advantage sheta hocche gia space complexity O(1) orthat constant space complexity khaibo.
    but kormu ki vabe? korar jonno amra tmeporary link ba connection use kormu. karon er ager jotoi amra traversal kortam tader moddhe ekta jinish chilo ki recursvely 
    koruk ar je vabei koruk shekahne shudhu samnei jaita but pichoner track rakhar kono way chilo na. 

    ar ekhon tumi jehetu inorder ar preorder iteratetiively kore felcho tai toamr kache mone hoite pare oita dia kora jay. but oikahne kintu amader stack data 
    structure use kora lagteche. jeta ekhta shomoy gia O(h) where h is the height of the tree ar squee tree te eita O(n) time complexity o jay. 


    she jonno e ashe amader morris traversal: 
    aacha morris traversal er jonno first je thing sheta hocche je amader temorary link create korte hobe jate kore amra er porer jei node ba inorder er kotha chitna
    korle inorder succesor er sathe link up korarite hoibe. ba aro easily koile koite hoibo ei je kono ekta node er sathe tar left subtree er right most elelement
    er right er sathe ekta temporary link create korte hobe. ekhon question thakte pare right most eleemnt er right jodi not null hoy. ashole hoibo na karon right most element
    manei toh er right e null pointer ache.


    
    */

    node* root = nullptr;
    buildBst(root);
    // inorder(root);

    cout << endl;

    cout << "Morris inorder traversal: ";
    morrisTraversal(root);

    return 0;
}

//input string: 10 23 15 -13 48 3 13 16 84 -1