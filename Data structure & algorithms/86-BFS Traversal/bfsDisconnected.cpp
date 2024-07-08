#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

//eikhane globally adj variable ke declare kortechi
unordered_map<int, list<int> > adj;
/*
Ar hae eikhane ami chaile toh pura ekta class create kore grpah er function gula use korte pari. abar chaile ami function gula
alada alada koreo globally declare korte pari. toh apatoto golobally e kortechi. 
*/

void takeInput(){
    int edges, a, b;
    cout << "enter the number of edges: ";
    cin >> edges;

    cout << "enter the edges: ";
    while(edges--){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}

void adjList(void){
    cout << "Output of adjacency list: ";
    for(auto i : adj){
        cout << i.first << " --> ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
}

void bfs(unordered_map<int, bool> &visited, int src){
    visited[src] = true;
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        cout << front << " ";
        
        for(auto i : adj[front]){
            if(visited[i] != true){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main()
{
    takeInput();
    adjList();

    unordered_map<int, bool> visited;
    int nodes = 9;
    cout << "bfs traversal of a diconnected graph: ";
    for(int i = 0; i < nodes; i++){
        if(visited[i] != true){
            bfs(visited, i);
        }
    }
    return 0;
}

/*
Prothomei ami amar jei disconnected graph ache oitar input string eikhane dia rakhi. ar hae disconnected grpah bolte ami oishob
grpah ke bujhate chaitechi jekhane graph er componenet alada thake. dhor 1 2 3 eksathe connected ache. ar 4, 5, 6, 7 onno jaygay 
connected ache. toh eigula kivabe traverse kora jay? 

ashole traversal algorithm same just eikhane khali ekta jinish beshi add hobe sheta hocche amader bfsDis(); jate kore amra amader
joto gula node ache shob gular jonno jeno Oi bfs er main function call korte pare. orthat e kkhetre source node hobe 1-7 er shob gula. 

input string: 8 0 1 1 2 1 3 2 3 2 4 4 5 6 7 7 8
*/