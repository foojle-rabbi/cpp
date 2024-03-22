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

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root){
        vector<int> ans;
        
        if(root == nullptr){
            return ans;
        }

        //now create map for storing the nodes value corrosponding values
        // map<int, map<int, vector<int> > > nodes;
        // queue<pair<Node*, pair<int, int> > > q;

        //uporer amar jei 2 ta map ar queue banaichi shegula na banaileo cholbo
        map<int, int> nodes;
        queue<pair<Node*, int>> q;

        //now push the root node and hd and lvl
        // q.push(make_pair(root, make_pair(0, 0)));

        q.push(make_pair(root, 0));

        while(!q.empty()){
            //ekhon queue te push kora nodes ta pop koro
            auto temp = q.front();
            q.pop();

            //first e node ta re alada koro
            Node* popped_node = temp.first;

            // auto hd = temp.second.first;
            // auto level = temp.second.second;

            //new 
            int hd = temp.second;

            //ekhon map e sotre koro value gula. but eikhane ekta catch ache, catch ta holo ei je proti ekta horizontal er jonno kebol ekta value e store korte hobe
            // nodes[hd][level].push_back(popped_node->data);

            //eikhanei oi condition ta use koro je ei hd te kono nodes ache kina
            if(nodes.find(hd) == nodes.end()){
                // nodes[hd].push_back(popped_node->data);
                nodes[hd] = popped_node->data;
            }

            //ekhon dekho left sub tree ache kina? jodi thake tahole queue te push kroo
            if(popped_node->left){
                // q.push(make_pair(popped_node->left, make_pair(hd--, level++)));
                q.push(make_pair(popped_node->left, hd-1));
            }

            //ekhon dekho right subtree ache kina. 
            if(popped_node->right){
                // q.push(make_pair(popped_node->right, make_pair(hd++, level++)));
                q.push(make_pair(popped_node->right, hd+1));
            }
        }

        //loop theke ber houar por just khali ekta ans vector e push koro
        for(auto& i: nodes){
            ans.push_back(i.second);
        }

        //now return the ans 
        return ans;
    }
};

int main()
{
    /*
    Vaire vai ekta kotha ache na je: its hard until you try. kotha ta jodio amar tarporeo majhe majhe ami relate krote pari je vai kotha sotto je try na korle chesta na korle 
    shob kichui e kothin lage. jemon kothin lagto ei 64 number er shob gula question but ekhon jokhon abar try kora shuru korchi ekhon abar easy e lage. 

    accha jak oita kotha na, kotha hocche eita je top view amader vertical order traversal er moto but eikhane khlai ekta catck sheta hocche gia amader proti ekta horizontal 
    er jonno kebol ekta nodes er vlaue e dorkar. top view mane hocche upro theke dekha. 
    */
    return 0;
}