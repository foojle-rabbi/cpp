#include<iostream>
using namespace std;

/*
Okay brothers let's solve this so called hard question. jodio ekta shomoy amar kacheo eita hard lagche jokhon ami c language dia dsa skhite chilam but ekhon 
alhamdulillah onek din e hoiche je ami ei shober sathe jorito. jodio etto beshi hoibo na. dhorle 1 year hoibo. but 1 year toh ar consistance chilam na. accha 
jak oi dike na jai. 

main kotha hocche vai solve korbo kivabe? accha solve korar age ami eita boila nei je vai delete node in bst mane hocche bst er property thik raikha jei kono ekta 
node ke delte kora. thik ache? toh mainly we will solve this problem using recursion. but first we need to kheyal rakhte hobe koyekta jinisher upor jemon: 
    1. first is the node we will delete would be the node that has no child.
    2. the node has 1 child. may be its left child or may be it has right child or full subtree.
    3. node has both left and right child. might be whole left and right subtree.

toh ei jei 3 ta condition koilam eigula amader mathay rakhte hobe. 

**condition 1:
    conditon 1 toh bujha easy mane amar jei node ta delete korte bolbe sheta leaf node mane er left eo child nai right eo child nai. toh just delete korar 
    jonno first e ei node tare delte korba then return korba null;

**condition 2:
    condition 2 te amar oi node er jekono ekta child thakte hote pare sheta amar left child hobe pare amar sheta right child or hote pare oi kahne pura subtree
    e ache but that will not matteer.
    ** accha jodi left child thake: tahole ekta temp pointer nite hobe jate kore oi whole subtree er track rakhte pare. pore oi nodeToDelete tare delete kore just
    temp ke return korlei hoye jabe. na bujhte parle vai dry run ache kore dekhte paro.

    ** jodi right child hoy: taholeo same case temp niba track rakhar jonno then temp ke return kore diba.

**condtion 3: 
    condtion 3 te amader both left and right child/subtree thakte pare. toh thakle node ta delte korar 2 ta way ache. first way is replace the root node value with
    inorder predecessor or replace the value with inorder successor. and then delete that node. ekhon kotha hote pare je vai inorder predessecor ar succesor ki? 

    sohoj banglay bolte gele: 10 15 20 22 25 35 49 50; ei tree er ami jodi 20 er kotha chinta kori taile 20 er ager jei node ortaht 15 hocche inorder predecessor. ar
    20 er pore orthat 22 hocche inorder succesor. 

    accha eitao bujhlam but tree er kkhetre kemone ber korbo? ashole shetao easy kraon oi node to delte er left subtree er shob cheye maximum value tai hocche 
    predeccesor. ar right subtree er shobcheye minimum value ta hocche inorder succesor. ar amra toh previous class e jene eshechi je kivabe kono tree er maxi
    ar minimum value kivabe ber korte hoy tai na? 

    toh manlam tumi oi mini or maxi dia replace korcho. tarporei ki kaj shesh? nah kaj shesh na arekta kaj ache sheta hocche amader oi inorder predeccessor/succesor
    ke delte kora. ar delte ta kemone korba naki? dlete amader recusion vai jan korbe!!

    and then our node will be deleted, that simple. now lets implement the code;

*/
//previous file theke copy korlam. 
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
    if(data < prev->data){ //maybe bianry search tree te duplicated thake na. tai equal deoyar dorkar nai
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

node* minInBst(node* root){
    while (root->left != nullptr)
    {
        root = root->left;
    }
    
    return root;
}
//accha uporer code gula toh amader creation korbe. now let's implement the code here
node* deleteInBst(node* &root, int key){
    //first base case
    if(root == nullptr){
        return root;
    }

    //chek koro jei node e acho shetai ni amader target node
    if(root->data == key){
        // jodi target node hoy tahole eikhanei amra amader deltetion process korbo. ar amader oi 3 ta conditon apply korbo
        //condition 1: 0 child
        if(root->left == nullptr && root->right == nullptr){
            delete root;
            return nullptr;
        }

        //condition 2: node has 1 child (left/right)
        if(root->left != nullptr && root->right == nullptr){ //orthat amar oi node er left part ache
            //left child er track rakhar jonno temp pointer create koro and then point.
            node* temp = root->left;
            delete root;
            return temp;
        }

        //right part thakle 
        if(root->left == nullptr && root->right != nullptr){
            node* temp = root->right;
            delete root;
            return temp;
        }

        // condition 3: node has both left and right child
        if(root->left != nullptr && root->right != nullptr){
            //eikhane ashchi mane amar left and right subtree ache. toh amra upore jain aschi je condition 3 er khetre amra inoder successor or predecessor dia 
            //root er value replace kori then oi predeccessor/succesor re dlete kore dei.
            int mini = minInBst(root)->data;
            root->data = mini;

            // now call the delete function for right subtree and delte that successor
            //jeehtu right side 
            root->right = deleteInBst(root->right, mini);
            return root;
        }
    }else if(key < root->data)
    {
        //root node er value key theke boro tar mane left part e ache oi node
        root->left = deleteInBst(root->left, key);
        //eikhane amar eot din vul hoiche karon ami root rturn kortechi na
        return root;
    }else
    {
        root->right = deleteInBst(root->right, key);
        return root; //protibar root ke return korte hobe. eikahnei amar vul hocchilo.
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

int main()
{
    /*
    Ar jai koroch vai dont forget to comment. 
    okay arekta jinish obseve korlam sehta hocche ami c language e teo delete node in bst pari nai. 


    but ami nije nije 3 ta condition ber korchi. 
        1. root node
        2. leaf node
        3. node with one child(left or right)
    */

    node* root = nullptr;
    takeInput(root);
    cout << "Before deleting : ";
    inorder(root);
    cout << endl;

    int t = 6;
    while(t--){
        int data;
        cout << "which node do you want to delte: ";
        cin >> data;
        
        root = deleteInBst(root, data);
        cout << "after deleting : ";
        inorder(root);
        cout << endl;
    }

    //jani na vai kothay korchechi vul. kneo jani pura code thik moto kaj korte che na. lets solve this late.

    /*
    accha last kotha hocche eitai je vai. 2 ta jinish eikhan theke dekhlam 
        1. first jinish ta holo bianry search tree te mone hoy duplicated thake na. but my question is duaplicates na thakle kemone hobe?
        2. second thing is duplicates thakle node delte hoy na. wait may be delete hobe. jodi right side o equal dei = ;
        NO bother equla sign dileo kaj hoy na. duplicates deletes hoy na.

    chatGpt: So, in a standard implementation of a BST, duplicates are not allowed. If you require a data structure that can store 
            duplicates, you might consider alternatives such as a multiset or a hash table, depending on your specific requirements
    */
    return 0;
}


//input string:  5 10 15 20 15 12 -5 21 -10 31 -1
// input string2: 42 35 15 5 20 12 -1

//10 15 20 22 25 35 49 50 -1