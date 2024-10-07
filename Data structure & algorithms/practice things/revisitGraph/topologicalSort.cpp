#include<iostream>
using namespace std;

class topoUsingDFs{
public:
	void getAns(vector<int> adj[], int src, vector<bool> &visited, stack<int> &s){
	    visited[src] = true;
	    
	    for(auto i : adj[src]){
	        if(visited[i] != true){
	            getAns(adj, i, visited, s);
	        }
	    }
	    
	    s.push(src);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    //amar joto tuku mone ache je topological using bfs is easy.
	    vector<bool> visited(V + 1, false);
	    stack<int> s;
	    
	    for(int i = 0; i < V; i++){
	        if(!visited[i]){
	            getAns(adj, i, visited, s);
	        }
	    }
	    // Accha eikhane vul kroechi size dia. size diye initialize korar dorkar nai. 
	   // vector<int> ans(V + 1);
	   vector<int> ans;
	    
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    //taile vul korchi reverse korte hobe
	    
	    return ans;
	}
 }
//code ta gfg te run korchilam but keno jani segment error ashtechilo. er ager right code tateo same. maybe tade
//server er kono problem ache. 

int main()
{
    /*
    amar joto tuku mone ache je topo only applied for directed graph. ar tar sathe topological means every u will
    appear befor v. eitai. ar eita solve korar 2 ta method ache ekta hocche using dfs jeita easy. and then arekta 
    ache bfs er maddhome jar nam hocche kahn's algorithms. oitao korbo.
    */
    return 0;
}