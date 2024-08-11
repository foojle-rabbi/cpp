#include<iostream>
using namespace std;

/*
Detect cycle in a directed graph using khan's algorithms. er moddhe amra topological sort use korbo. ar topological er moddheo
bfs approach ta use korbo. ar topo using bfs er algo er moddhe toh indegrees er concept ache. toh amra oi indegrees + er sathe
topological sort kintu ekmatro DAG(directed acyclic grpah) er kkhetre kaj kore. DCG(directed cyclic grpah) er kkehtre kaj 
kore na. toh amra oi concept tai eikhane kaje lagao. 

je amra kahn's algorithms use korbo. but ekta count variable rakhbo. jodi cycle thake taile jei koyekta node er moddhe cycle
ache tader indegree 0 hobe na. ar indegree 0 na hole queue push hobe na. ar queue te push na hobe shob gula element count hobe 
na. taile count will be not equal to V; count != V; jodi v hoy taile cycle nai. ar jodi V na hoy taile cycle ache. baash eituku e. 
*/

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        //bujhchi eikhane kahn's algorithms use kora hobe. 
        vector<int> indegree(V, 0);
        queue<int> q;
        
        // first indegree ber koro
        for(int i = 0; i < V; i++){
            for(auto j : adj[i]){
                indegree[j]++;
            }
        }
        
        //jader indegree 0 hoiche tader shobaire queue te push koro
        for(int i = 0; i < V; i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        
        //count thik rakhar jonno count variable neo;
        int count = 0;
        // eibar queue empty na hoya porjonto loop chalao
        while(!q.empty()){
            int front = q.front();
            q.pop();
            
            //eibar count er value increase koro
            count++;
            for(auto i : adj[front]){
                //neighbour ber korar shomoy indegree er value 1 decrease koro. 
                indegree[i]--;
                
                //eibar decrease korar por check koro je kono tar indegree ki 0 hoiche kina. 
                if(indegree[i] == 0){
                    q.push(i);
                }
            }
        }
        
        return count != V;
    }
};

int main()
{
    /*
    Accha brother bishoy gula clear kori. valo kore shoon. dekh amar kache graph er chinta korle hoy mot 4 dhoroner. jeon
    directed undirected. abar eigualr dfs bfs approach. taile mot 4 ta. 
        1. detect cylce in undirected grpah
            a. bfs appraoch (parents er concetps)
            b. dfs approach  (parents er concepts)

        2. detect cycle in directed graph
            a. bfs approach (kahns algorithms er concept)
            b. dfs approach (dfs visited concept)
    
    abar eikhane arekta topic ache sheta holo topological sort er. eitar o abar 2 ta approach ache. 
        1. using dfs(stack concept)
        2. kahns algorithms (indegrees concept)
    */
    return 0;
}