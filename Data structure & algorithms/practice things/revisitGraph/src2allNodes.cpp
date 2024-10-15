#include<iostream>
using namespace std;

class solution{
    public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        //first e jehetu amader kono adj list deoya nai. tai age list make koro with edges
        //here N is the number of Nodes.
        //and M is the number of edges
        
        vector<int> adj[N+1];
        for(int i = 0; i < M; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        //ekhon list jehetu make kora hoiche eibar bfs er kaj shuru kore deo. bfs korte jei jei data structure lagbe oigulare
        //declare koro.
        vector<bool> visited(N +1, false);
        vector<int> dist(N, -1); // eitai amader ans array bolte paro. jeikhane amader sorc node theke baki node er distance
        //store korbo.
        
        queue<int> q;
        q.push(src);
        dist[src] = 0;
        visited[src] = true;
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            
            for(auto i : adj[front]){
                if(!visited[i]){
                    visited[i] = true;
                    //dist[i]++; accha amder ei line ta vul. vul karon ar shuru joto neighbour re pabo totobar + kormu. jeita vul
                    //ans dibe. taile amader uchit hobe ki. amra front node er ager jei distance ache tar sathe ekhon + 1 korbo.
                    //tahole amra amader expected result pabo.
                    dist[i] = dist[front] + 1;
                    q.push(i);
                }
            }
        }
        
        return dist;
    }
}

int main()
{
    /*
    question link: https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
    Accha amader ei question tate bola ache emon je amader ke ekta undirected unweighted graph deoya thakbe and amader oi graph
    er ekta src boila deoya thakbe. so amader kaj hobe oi src theke others jei node ache tader minimum distace koto. ebong 
    amader oi distance er ans (vector, array) return korte hobe. 

    wait wait tobe eita ar dijkastra kintu milaiya feilo na. both are different.

    approach: Jodi approach er kotha boli. taile bolmu main hocche amder dry run. jekono question valo vabe bujhte hobe first
    e jei jinish ta joruri. sheta hocche ache question ta valo kore khatay lekha then approach think kora. taile dekhba maximum 
    question gula nije nije solve kora jay. ba nije nije solve na korle solve ta jodi dry run kora hoy tahole moneo thake
    onek din dhore. 

    ar ei question tar main logic hocche ei je amader each node er value 1 dhora hobe she jonno. toh jehetu 1 dhora hoiche
    edges er value tai oi source node theke others node joto dure jabe tar distance toto barte thakbe. ar ei concept ta
    kaje lagiyei level wise bfs jemon kaj kore tai amra eikhaneo bfs algorithm use korbo. tobe track rakhbo khali dist;
    */
    return 0;
}