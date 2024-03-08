#include<iostream>
using namespace std;

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr){
            return true;
        }

        if(p != nullptr && q == nullptr){
            return false;
        }

        if(p == nullptr && q != nullptr){
            return false;
        }

        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);

        bool isSameVal = q->val == p->val;
        
        if(isSameVal && left && right){
            return true;
        }else{
            return false;
        }
    }
};

int main()
{
    /*
    leetcode e eitar name: same tree you know what this problem is also solved by recursion. 
    Identical tree mane hocche 2 ta tree same orthat
          1
        / \
       2   3
      /   / \
     4   5   6

        1
        / \
       2   3
      /   / \
     4   5   6

     othat eikhane amar 2 ta tree er value same tar mane tree 2 ta identical.
    */
    return 0;
}