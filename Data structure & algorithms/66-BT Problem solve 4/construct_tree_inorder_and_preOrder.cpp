#include<iostream>
#include<map>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int value): data(value), left(nullptr), right(nullptr) {}
};

//okay lets solve this problem here by my own
class solution{
    public:
    int findPosition(int in[], int element, int n){
        for(int i = 0; i <= n; i++){
            if(in[i] == element){
                return i;
            }
        }

        //jodi elemtn na khuija pao taile -1
    }
    Node* solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int size){
        //at first i need the base case for this recursion function
        if(index >= size || inorderStart > inorderEnd){
            return nullptr;
        }
        /*toh first e toamar ekta node create korte hobe. toh tar jonno vlaue dorkar tai first e element ta ber koro jemon tmi jodi ei 2 ta array er kothai chinda
        koro at first mane prothom dik dia. karon amra jani recursion e matro ekta case e solve korte hoy. kenono baki ta recursion e kore fele. toh amader 2 ta is_array
        value holo in = [3, 1, 4, 0, 5, 2] and pre = [0, 1, 3, 4, 2, 5]; toh ami first e pre nia kaj korbo mane pre er prothom index e holo amar root node er value 
        tai ami first e pre node er element ber korbo. which is 0.
        */

        int element = pre[index++]; //ar sathe sathe eitar index er man o increase kore felo jate next call e er porer element er jonno call jay.

        //toh ekhon jeehetu element ber korcho tar corrosponding ekta node create koro mane root node ar ki.
        Node* root = new Node(element);

        /*ekhon root node ache tai left subtree dorkar ar right subtree dokar. tai left er jonno call koro right er jonno call koro. but there is a cathch that 
        tumi je left ar right er jonno call korbo sheta in order e koto theke koro mane kon element theke kon element. karon jodi tmi 0 er kotha e chinta kro taile 
        pre oder e ena first element but in order e kintu middle element, and ei karoneri oi inorder e oi elemtn er left side er gula hobe left subtree ar right er gula 
        hobe amar right subtree er vlaues. so she karone amake aage element er positon ber korte hobe. jate position er left er gula jay left e and right er gula jate 
        jay right e. */

        int position = findPosition(in, element, size); //toh inorder er moddhe oi element er positon ber korte hobe array dite hobe element dite hobe and size dite hobe. 


        //toh ekhon jehetu positon ber korcho. toh jodi first case chinta koror taile amar inoder er array er moddhe 0 paiba majhe toh 0 er left sider er gula left 
        // subtree er jonno ar right er gula right subtree er jonno. so left er jonno hobe = inorderStart theke pos -1; 
        root->left = solve(in, pre, index, inorderStart, position -1, size);

        // thik same vabe amar right er jonno call korte hobe. toh right er jonno hobe inorder er pos + 1 theke inorder end porjonto.
        root->right = solve(in, pre, index, position+1, inorderEnd, size);

        //ekhon jehetu root node create hoiche tai root ke return kro 

        return root;
    }

    /*
    ----------------------------
    arekta kotha. ami je upore jei solution korchi. thats not the optimises because of find postion function. jeehtu each time ami element er jonno whole array traverse
    kortechi oita optimal hoy na. toh optimal korar jonno ekta Haspmap create korte hobe. element er sathe index er. 0->0, 1->1, 3->2, 4->3, 2->4, 5->5; first is element 
    and 2nd thing is their indexes.
    ----------------------------
    */
    Node* optimised(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int size, map<int, int> &nodeToIndex){
        //base case
        if(index >= size || inorderStart > inorderEnd){
            return nullptr;
        }

        int element = pre[index++];
        
        //now create a node
        Node* root = new Node(element);
        
        //call for left and then call for right. but before them first find the postion using map
        int position = nodeToIndex[element];

        root->left = optimised(in, pre, index, inorderStart, position-1, size, nodeToIndex);
        root->right = optimised(in, pre, index, position+ 1, inorderEnd, size, nodeToIndex);

        //now return the root
        return root;
    }

    //orthat tree build korar jonno tomare 3 ta jinish deoya thakbe 2 ta array ar tader size;
    Node* buildTree(int in[], int pre[], int n){
        //toh jehetu ami eita recursively solve korbo tai amake alada ekta solve function create korte hobe; but tar age amar star korte hobe pre er first index dia
        int preorderIndex = 0;

        // Node* ans = solve(in, pre, preorderIndex, 0, n-1, n);

        //optimised solution using map; elemtns with indexes
        map<int, int> nodeToIndex;
        for(int i = 0; i < n; i++){
            int element = in[i];
            nodeToIndex[element] = i;
        }

        Node * ans = optimised(in, pre, preorderIndex, 0, n-1, n, nodeToIndex); 
        return ans;
    }

    //ei fucntion gula create korchi check korar jonno je amar code thik moto kaaj korteche kina!! luckly they are working fine.........
    void inorder(Node* root){
        if(root == nullptr){
            return;
        }

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void postOrder(Node* root){
        if(root == nullptr){
            return;
        }

        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
};

int main()
{
    //construct tree form inorder and pre order array

    int in[] = {3, 1, 4, 0, 5, 2};
    int pre[] = {0, 1, 3, 4, 2, 5};

    solution object;
    Node* root = object.buildTree(in, pre, 6);
    object.inorder(root);
    cout << endl;
    object.postOrder(root);
    return 0;
}