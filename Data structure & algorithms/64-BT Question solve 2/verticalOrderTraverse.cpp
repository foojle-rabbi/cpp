#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    /*
    Accha amra ei traversal tao level order traversal er shahajje korbo. but eikhane koyekta jinish different hobe. 
        1. amra jei queue ta nibo sheikhane amader node* er sathe aro 2 ta jinish nite hobe. ekta holo horizontal distance ar 2nd holo levelcount. 
        2. amader ekta map dorkar, jeita kina amader [hd][level] wise amader oi nodes gular value store korbe. 

    ashole ei 2 ta jinish e different ar baki shob pray same e. 
    */

    //first createa 2d vector for stroing values
    vector<vector<int>> ans;

    //now check if the root node is empty
    if(root == nullptr){
        return ans;
    }

    //now as we say previous that we need a queue and a mapping but different form our normal level order's queue
    queue<pair<node*, pair<int, int> > q;
    //accha ei je eikhne amader queue ta nichi oikahne kintu amra 3 ta jinish nilam first e nilam node* then pair of int int for hd and lvl.

    map<int, map<int, vector<int> > > storeInMap;
    //eikahne first jei integer nichi oita nichi amader hd er jonno ar second jeita map nichi oita amader proti ta level er jonno shob nodes er vlaue store korar jonno vector

    //ekhon first e amader queue er moddhe root node push koro shate hd ar lvl o 
    q.push(root, make_pair(0, 0));

    while(!q.empty()){
        //ekhon amar queue te push kora nodes tare pop korte hoibo na? kintu ekta jinish vab toh ami jei node ta pop korbo oita ki shudhu node* type er? na oita amar previous queeu er type er
        pair<node*, pair<int, int> > temp = q.front();
        q.pop();

        //ekhon jehetu queue theke pop korcho, ekhon ei pop kora element re map e store koro. 
        //kintu tar age amar oi temp er node dorkar level dorkar ar horizontal distance dorkar.

        node* firstNode = temp.first; // temp theke ami amar nodes ke nia nilam.

        //ekhon temp theke ami amar horizontal distance nibo
        int hd = temp.second.first;
        //tar por amr dorkar level 
        int level = temp.second.second;

        //ekhon aramse map er moddhe store koro
        storeInMap[hd][level].push_back(firstNode->data);

        //ekhon dekho je ei nodes er left subtree ache kina. jodi thake tahole push koro. but hd ar level mathay raikha
        if(firstNode->left){
            q.push(firstNode->left, make_pair(hd-1, level+1));
            //amra jani left mane bame gelee horizontal distance kome tai hd--, ar level toh barbei.
        }

        if(firstNode->right){
            q.push(firstNode->right, make_pair(hd+1, level+1));
        }


    }
        for(auto i: storeInMap){
            vector<int> temp;
            for(auto j: i.second){
                for(auto value: j.second){
                    temp.push_back(value);
                }
            }
            ans.push_back(temp);
        }

        return ans;
    }
};

int main()
{
    /*
    vai this is one of the hardest question on leetcode. to solve this question i have know about mapping. Joddio vai amar mapping jei concept oita ototao clear
    nah. tai she jonnoi mapping ta valo kore shikhte hobe. ami ei porjonto muta muti onek gula question e dekhchi jeitate amar mapping er help neoya lage. tai 
    amar she karonei valo kore mapping ta shomporke jante hobe.

    ar hoo ei question ta babbar mia tar moto kore explain korche. ekhon tui chaile kintu ei problem ta onno tutorial er maddhomeo shikhte parbi. 
    
    */
    return 0;
}