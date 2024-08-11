//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void getTopo(int src, vector<int> adj[], vector<int> &visited, stack<int> &s){
	    visited[src] = true;
	    
	    for(auto i : adj[src]){
	        if(!visited[i]){
	            getTopo(i, adj, visited, s);
	        }
	    }
	    s.push(src);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    vector<int> visited(V+ 1, 0);
	    stack<int> s;
	    
	    for(int i = 0; i < V; i++){
	        if(visited[i] != true){
	            getTopo(i, adj, visited, s);
	        }
	    }
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    
	    return ans;
	}
};
/*
Ei problem tao ettota hard na. eitar name hocche topological sort. ekhon question thakte pare je vai topo sort abar kare koy. 
ashole eita emon ekta sorting method jeikhane amader each and every nodes er kkhetre u will be appreared before v. 

but eikhane arekta key point mone rakhba je it will be only valid for DAGs means(directed acyclic grpahs) mane undirected ar 
cyclic grpah e eita kaj korbe na. 


ar hoo arekta kotha ei je aita kintu amra solve korchi dfs dia. eitar arekta bfs approach ache tar name hocche kahn's algorithms
*/