#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        /*
        accha i think i have understand the question. eikhane amader ekta src node
        edoya thakbe toh oi source node theke amder onnano node er distance koto hobe
        shetar ekta ans vector/array return korte hobe. 
        */
        
        //eikhaneo amder chiro porichito algorithms bfs use korbo. karon bfs level wise print kore
        //so level wise kora manei prottekta source theke koto dure ache tar ber kora
        
        vector<int> adj[N];
        for(int i = 0; i < M; i++){
            int v = edges[i][0];
            int u = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited(N, 0);
        vector<int> distance(N, -1);
        
        queue<int> q;
        q.push(src);
        distance[src] = 0;
        visited[src] = true;
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            
            for(auto i : adj[front]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] = true;
                    distance[i] = distance[front] + 1;
                }
            }
        }
        
        return distance;
    }
};

int main()
{
    /*
    Accha ei question ta amader gfg er ekta question: https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
    question ta hocche emon je tomare ekta graph oviously deoya thakbe. ebong sathe ekta src node deoya thakbe toh tomar kaj hobe
    oi src node theke onno joto node ache tader distance ber kora. ar eta ekta unweighted grpah so eigular kono weight ba
    edges er value deoya thakbe na. but each edges re tumi 1 dhoira niba. 

    solve approach:
    solve korao aha mori kothin kichu na. eikhaneo amader bfs algorithms use korbo. just sathe khali ekta distance vector 
    add kore dibo to track the distance. 
    
    */
    return 0;
}