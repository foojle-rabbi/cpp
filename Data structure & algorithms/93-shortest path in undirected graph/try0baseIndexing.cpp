vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// vector<int> adj[n];
    vector<int> adj[n]; //uporer code ta vul. jehetu amra kaj kri 0 base ar tara kore 1  base tai 1 size er beshi nite hobe. 

	for(int i = 0; i < m; i++){

		// int u = edges[i].first;
		// int v = edges[i].second;

		int u = edges[i].first -1; //convert to 0 base indexing by decreasing 1 value;
		int v = edges[i].second -1;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// vector<bool> visited(n, false); 
	// vector<int> parent(n, -1); 
    //corect way for avoiding run time error.
    vector<bool> visited(n, false);
    vector<int> parent(n, -1);
	queue<int> q;
	

	//tar sathe source s ar target t er value o 1 kore komaite hobe. 

	s--;
	t--;
	
	q.push(s);
	visited[s] = true;
	parent[s] = -1;

	while(!q.empty()){
		int front = q.front();
		q.pop();

		for(auto i : adj[front]){
			if(visited[i] != true){
				q.push(i);
				parent[i] = front;
				visited[i] = true;
			}
		}
	}

	vector<int> ans;
	
	while(t != -1){
		ans.push_back(t + 1); //convert again to 1 base indexing. 
		t = parent[t];
	}

	reverse(ans.begin(), ans.end());

	return ans;
	
}

/*
accha previous code e amra deikha aschi je ashole kivabe 1 base indexing niya kaj korte hoy. toh oikhane amader solution 
chilo just normal ekta kaj. orthat shob gula vector e.g(parent, adj, visited) egiulare 1 size koira baraiya beshi neo. 

ar I think 0 base indexing korte hobe ulta. like source/target eigualre 1 kore minus korte hobe. u ar v ke push korar shomoy
1 size kore komaiya dite hobe. i think ei 2 ta kaj e. 

na nah arekta kaj ache sheta hocche last e ans vector er moddhe push korar shomoy 1 base e return korte hobe. mane push korar
time + 1 korte hobe. bach ei tuku e...
*/