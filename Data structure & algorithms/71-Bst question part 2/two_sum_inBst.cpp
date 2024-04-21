#include<iostream>
using namespace std;

class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    void getInorder(struct Node *root, vector<int> &ans){
        if(root == nullptr){
            return;
        }
        getInorder(root->left, ans);
        ans.push_back(root->data);
        getInorder(root->right, ans);
        
    }
    
    
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    // step 1. store the inorder traversal 
    vector<int> inorder;
    getInorder(root, inorder);
    int start = 0;
    int end = inorder.size() -1;
    
    while(start < end){
        if((inorder[start] + inorder[end]) == target){
            return true;
        }else if((inorder[start] + inorder[end]) < target){
            start++;
        }else{
            end--;
        }
    }
    return false;
    }
};

int main()
{
    /*
    Brother solution ta mutamuti easy e just koyekta step er kotha mone rakhba. 
    step 1: store the inorder to an array or vector.
    step 2: apply the two pointer approach.

    ar two pointer apprach er moddhe kokkhon start re ++ kora lage ar kokhon end re -- kora lage sheta bujha o easy
    tobe tar jonno toke khata kolom nia ektu dry run korte hobe. 

    eitar arekta upay ache solve korar sheta hocche stack use kore but but oitar complexity abar onek beshi. 
    */
    return 0;
}