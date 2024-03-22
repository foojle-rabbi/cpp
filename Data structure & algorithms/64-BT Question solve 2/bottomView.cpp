#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        if(root == nullptr){
            return ans;
        }
        
        //jehetu eikhane amar only hd er corrosponding value dorkar tai ami just int , int nilam. 1 for hd. 2nd is for value
        map<int, int> nodes_map;
        queue<pair<Node*, int> > q;
        
        //now push the root node to the queue
        q.push(make_pair(root, 0));
        
        //now iterate until the queue is not empty
        while(!q.empty()){
            auto temp = q.front(); 
            q.pop();
            
            auto frontNode = temp.first;
            int hd = temp.second;
            
            //now pusht the nodes data to the map. ekhon eikahne kono condition chara push korar karone jokhon amar puro tree shesh hobe tokhon kebol nicher vlaue
            // gula e amar map er moddhe pore thakle. fole key jodi niche thkee takay mane bottom theke tahole she kebol oi map er value gula e dekhbe. 
            nodes_map[hd] = frontNode->data;
            
            //check if the left subtree exists
            if(frontNode->left){
                q.push(make_pair(frontNode->left, hd-1));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right, hd+1));
            }
        }
        
        //now iterate the map and store the values to ans vector
        for(auto& i: nodes_map){
            ans.push_back(i.second);
        }
        return ans;
    }
};

int main()
{
    /*
    Same as top view but without the condition
    */
    return 0;
}