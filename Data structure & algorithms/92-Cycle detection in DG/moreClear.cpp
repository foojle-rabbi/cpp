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
            b. dfs approach (dfsVisited (extra vector for tracking call stack) concept)
    
    abar eikhane arekta topic ache sheta holo topological sort er. eitar o abar 2 ta approach ache. 
        1. using dfs(stack concept)
        2. kahns algorithms (indegrees concept)
    */
    return 0;
}

/*
Accha taile ajke abar onekdin por same question solve korte aisha onek jay atkaiya gechi abar shei atkanor jayga gula clear
o korte parchi. sathe notun jinish shike confusion o dur korte partechi. toh first upore ja lekha ache ta shob gula e 
sottie. but hotath aisha dekhle bujahr upay nai. tobe eikhane dfs approach for solving UDG(cycle) eita kori nai maybe. but
hae eikhane parents concept use kora hoy. 


ar eitar jei main question means. cycle detect in directed grpah using bfs(khan's algorithms) eitar moddhe main cocepts hocche
gia amar count er. tmi jodi dry run korte jao tahole kheyal korba je. amra firs e indegree ber kori then check kori je, kon
kon node er indegree 0; jodi 0 hoy then queue te push kori. it can be more than one node at the first time. 

then jotokkhon porjonto queue khali na hoy totokkhon porjon loop chole. ar in the loop amra quete theke 0 indegree oyala node 
ber kore tar neighbour gula'r indegree -- minus kore dei. ar sathe jeitar indegree 0 hoy tare push kori. 

toh eikhane jodi cycle na thake tahole shob gula node(veritices) e visit kora hoy. karon indegree ekta shomoy gia shobar 0 
hoiya jay. dry run korle aro clear hobe. kintu jodi cycle thake tahole amar shob gula vertices er indegree 0 hobe na. 
joto ta node cycly connected thakbe totoatar indegree 0 hobe na. ba toto gulare queue push korte parbe na. er agei amar 
queue empty hoiya jaibo. ar eitao mone rakhba je shob shomoy count < V; where v is the nubmer of veritces.

tai last e check korba je count == v kina? jodi == hoy tahole cycle nai. jodi not equal hoy taile cycle ache. thats easy. 
*/