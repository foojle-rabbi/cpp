#include<iostream>
using namespace std;

class Solution {
public:
    void solveLeft(Node* root, vector<int> &ans){
        if(root == nullptr || root->left == nullptr && root->right == nullptr){
            return;
        }
        ans.push_back(root->data);
        if(root->left)
            solveLeft(root->left, ans);
        else
            solveLeft(root->right, ans);
    }
    
    void solveLeaf(Node* root, vector<int> &ans){
        if(root == nullptr){
            return;
        }
        
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(root->data);
            return;
        }

        solveLeaf(root->left, ans);
        solveLeaf(root->right, ans);
    }
    
    void right(Node* root, vector<int> &ans){
        if(root == nullptr || (root->left == nullptr && root->right == nullptr)){
            return;
        }
        
        if(root->right)
            right(root->right, ans);
        else
            right(root->left, ans);
        
        ans.push_back(root->data);
    }
    
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == nullptr){
            return ans;
        }
        
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(root->data);
            return ans;
        }
        
        ans.push_back(root->data);
        solveLeft(root->left, ans);
        /*
        Accha oikhane ami jeivabe puro ta tree traverse korchi oivabe na korleo hoibo.
        orthat first e left subtree er shob gula leaf node print koro, then right subtree er shob gula leaf nodes print koro. print bolte eikhane
        ami store kora bujahichi. 
        */
        solveLeaf(root->left, ans);
        solveLeaf(root->right, ans);
        right(root->right, ans);
        
        return ans;
    }

    /*
    Jaak vai finally onek chestar por shob gula test case passed koraite parchi. ashole coder korar aage joto ta easy mone hoice code kote 
    gia kintu tootao easy lage nai.

    er jonnoi bola je vai code koro beshi beshi kore code koro.
    */
};

int main()
{
    /*
                         1
                        / \
                       2   3
                      /   / \
                     4   5   6
                    / \     /    
                   7   8   11

    boundry traversal: 1 2 4 7 8 5 11 6 3 1;
    orthat eikhane boundry traversal mane hoiteche je vai age tumi root node er value print koro then left subtree er kebol left node er
    value gula print koro then leaf node er value gula print koro then right subtree er value gula print koro. but right er kkhetre mone 
    rakhte hobe je up to down na. down to up traverse korte hobe. asha kori bujhaite parchi.

    jodi order wise lekhi taile
        1. root value
        2. left subtrees left sided value
        3. leaf node's value
        4. right subtree right side value(down to up);

    Jaa, ja jaa hint deoyar dia dichi ekhon bakita nije nije code kore solve kor.
    */
    return 0;
}