#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
    vector<int> ans;
    if(root == nullptr)
        return ans;
        
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int levelSize = q.size();
        
        for(int i = 0; i < levelSize; i++){
            Node* temp = q.front();
            q.pop();
            
            if(i == 0)
                ans.push_back(temp->data);
            
            if(temp->left) 
                q.push(temp->left);
                
            if(temp->right) 
                q.push(temp->right);
        }
    }
    
    return ans;
}

int main()
{
    
    return 0;
}