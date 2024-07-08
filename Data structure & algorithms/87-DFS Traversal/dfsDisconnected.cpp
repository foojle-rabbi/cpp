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

void dfs(unordered_map<int, bool> &visited, int src){
    cout << src << " ";
    visited[src] = true;

    for(auto i : adj[src]){
        if(visited[i] != true){
            dfs(visited, i);
        }
    }
}

int main()
{
    takeInput();
    adjList();

    unordered_map<int, bool> visited;
    int nodes = 9;
    cout << "dfs traversal of a diconnected graph: ";
    for(int i = 0; i < nodes; i++){
        if(visited[i] != true){
            dfs(visited, i);
        }
    }
    return 0;
}

/*
input string: 8 0 1 1 2 1 3 2 3 2 4 4 5 6 7 7 8
*/