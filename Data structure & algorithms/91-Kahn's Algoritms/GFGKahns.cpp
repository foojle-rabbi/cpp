//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    vector<int> indegree(V + 1, 0);
	    unordered_map<int, bool> visited;
	    
	    //first find all the indegrees
	    for(int i = 0; i < V; i++){
	        for(auto j : adj[i]){
	            indegree[j]++;
	        }
	    }
	    
	    //eigar jeigular indegrres amar 0 sheigulare queue te push koro
	    queue<int> q;
	    for(int i = 0; i < V; i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    
	    //eibar queue jotokkhon porjonto khali na hoy totokkhon porjonoto loop chalao
	    //ar tar sathe indegree re minus koro sathe jeigular indegree 0 hoibo oigulare
	    //queue te push koro
	    while(!q.empty()){
	        int front = q.front();
	        q.pop();
	        
	        ans.push_back(front);
	        
	        //eibar baki neighbour gula dekho tar sathe indegree re minus kro
	        for(auto i : adj[front]){
	            indegree[i]--;
	            if(indegree[i] == 0){
	                q.push(i);
	            }
	        }
	    }
	    return ans;
	}
};