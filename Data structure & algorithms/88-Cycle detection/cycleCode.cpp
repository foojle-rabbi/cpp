#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//lets make a graph first
void takeInput(vector<int> adj[], int v){
    cout << "enter the input string: ";

    while(v--){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void display(vector<int> adj[], int n){
    cout << "display of adjacent list: " << endl;

    for(int i = 0; i < n; i++){
        cout << i << " -> ";
        for(auto j : adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }
}

bool isCycle(vector<int> adj[], int n, int src, vector<int> &visited{
    queue<int> q;

    q.push(src);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for(auto i : adj[front]){
            if(visited[i] != true){
                q.push(i);
            }
        }
    }
    
}

int main()
{
    int vertices = 6;
    vector<int> adj[vertices + 1];

    takeInput(adj, vertices);
    display(adj, vertices);

    vector<int> visited(vertices + 1, 0);

    for(int i = 0; i < vertices; i++){
        if(visited[i] != true){
            int ans = isCycle(adj, vertices, i, visited);
        }
    }

    return 0;
}



/*
Input string: 0 1 1 2 1 3 2 3 2 4 4 5
*/