#include<iostream>
#include<vector>
using namespace std;

bool dfs(int v, vector<bool>& visited, int parent) {
    visited[v] = true; // Mark the current node as visited

    // Recur for all vertices adjacent to this vertex
    for (int i : adj[v]) {
        // If an adjacent is not visited, then recur for that adjacent
        if (!visited[i]) {
            if (dfs(i, visited, v)) {
                return true;
            }
        }
        // If an adjacent is visited and not parent of current vertex, then there is a cycle
        else if (i != parent) {
            return true;
        }
    }
    return false;
}

bool detectCycle() {
    vector<bool> visited(V, false); // Initialize visited array

    // Call the recursive helper function to detect a cycle in different DFS trees
    for (int i = 0; i < V; i++) {
        if (!visited[i]) { // Don't recur for already visited vertices
            if (dfs(i, visited, -1)) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    /*
    Accha eitar dfs approach o ache. ekkebare same concept orthat parent er concept. but eitar khali 
    recursion approach. 
    */
    return 0;
}

/*
Every time ami pichoner code gulate ashi ar boli, vai ki likhlam eigula. kintu tarporeo keno jani comment add 
kora hoy na. but amar mone hoy comment kora ta tao banglay khubi necessary.
*/