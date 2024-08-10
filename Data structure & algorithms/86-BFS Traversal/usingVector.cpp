#include<iostream>
#include<vector>
using namespace std;

void takeInput(vector<int> adj[], int e){
    int a, b;

    cout << "Enter the input string: ";
    while(e--){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}

void display(vector<int> adj[], int v){
    cout << "Adjacency list: " << endl;

    for(int i = 0; i <= v - 1; i++){
        cout << i << " -> ";
        for(auto j : adj[i]){
            cout << j << " ";
        }    
        cout << endl;
    }
}

int main()
{
    int v, e;
    cout << "Enter the number of vertices and edges: ";
    cin >> v >> e;

    vector<int> adj[v + 1];
    takeInput(adj, e);
    display(adj, v + 1);
    return 0;
}

/*  
Input string: 8 8 3 4 3 2 2 1 1 5 5 7 6 5 6 8 8 7
*/ 