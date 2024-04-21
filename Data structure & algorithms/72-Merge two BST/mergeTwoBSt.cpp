#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    void getInorder(Node *root, vector<int> &ans){
        if(root == nullptr){
            return;
        }
        getInorder(root->left, ans);
        ans.push_back(root->data);
        getInorder(root->right, ans);
        
    }
    
    void mergeVectors(vector<int> &inorder1, vector<int> &inorder2, vector<int> &ans){
        int i = 0;
        int j = 0;
        
        while(i < inorder1.size() && j < inorder2.size()){
            if(inorder1[i] < inorder2[j]){
                ans.push_back(inorder1[i]);
                i++;
            }else{
                ans.push_back(inorder2[j]);
                j++;
            }
        }
        
        while(i < inorder1.size()){
            ans.push_back(inorder1[i]);
                i++;
        }
        
        while(j < inorder2.size()){
            ans.push_back(inorder2[j]);
                j++;
        }
    }
    
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int> inorder1;
       vector<int> inorder2;
       getInorder(root1, inorder1);
       getInorder(root2, inorder2);
       
       vector<int> ans;
       
       mergeVectors(inorder1, inorder2, ans);
       return ans;
    }
};

/*
Solution dekhlam kivabe ar korlam kivabe. eitar question tao mane exact problem tao online er kono site question hisabe pailam
na jei karone geeks for geeks ei jeita paichi shudhu oitai solve kore bose royechi. ar mone hoy ta eitare explain korar dokar ache. jehetu already kivabe merge sort
korte hoy sheta shikhe roichot. 
*/
int main()
{
    /*
    Question ta motamuti interesting e. karon ei ekta question korte gia aro onek concept er valo dharona thakte hobe. tobe first ei eitar ekta brute force
    hocche gia je 

    approach #1: Accha ei approach e first 2 ta BST er inoder 2 ta vector e store kora then oi 2 ta vector ke merge kora then sorted merged vector theke BST create
    kora. jei ta easy and simple. but at the cost of complexity O(m + n);

    ekhon amra chacchi na etto ta complexity te korar. amra chacchi jate kore constant space e amader problem ta solve hoy jay. toh shei tao kora jabe but koyekta
    concept clear thaka joruri. jemon: bst to linked list. merge two linked list. linked list to bst.

    ashole hisabe ami pura problem solve korar way e bole diyecchi. 

    approach #2: approach number 2 ta kichu lengthy but optimal. toh eikhaner moddhe 3 ta step ache ei step gula follow korlei prblem will be solved. theese three
    steps are: 
        1. convert both bst in to a sorted doulbly linked list
        2. merge these two sorted doubly linked list.
        3. Convert the merged list into a BST. 

    
    */

    
    return 0;
}