#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

    cout << "Add edge function called\n";
}

void printGraph(vector<int> adj[], int v){
    cout << "Adjacency of list: ";
    for(int i = 0; i < v; i++){
        cout << i << "--> ";
        for(auto j : adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "print function called";

}

int main()
{   
    cout << "main function called\n";
    int v = 4;
    vector<vector<int> > adj;

    // addEdge(adj, 1, 2);
    // addEdge(adj, 1, 3);
    // addEdge(adj, 2, 3);
    // addEdge(adj, 3, 4);
    cout << "Came to 35 number line\n";

    printGraph(adj, v);
    return 0;
}