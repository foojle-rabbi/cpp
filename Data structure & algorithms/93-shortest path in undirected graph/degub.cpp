vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// vector<int> adj[n];
    vector<int> adj[n + 1]; //uporer code ta vul. jehetu amra kaj kri 0 base ar tara kore 1  base tai 1 size er beshi nite hobe. 

	for(int i = 0; i < m; i++){

		int u = edges[i].first;
		int v = edges[i].second;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// vector<bool> visited(n, false); 
	// vector<int> parent(n, -1); 
    //corect way for avoiding run time error.
    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1, -1);
	queue<int> q;
	
	
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
		ans.push_back(t);
		t = parent[t];
	}

	reverse(ans.begin(), ans.end());

	return ans;
	
}

/*
Okay now i understand the code. the mistake that i made was on 0 base and 1 base indexing. i thing we were working on 0 base
indexing but on the problem they were using the 1 base indexing. she jonno e amader runtime error ashchilo. 

toh eita solve korar 2 ta way ache. first 1 base e neoya noyto 0 base e neoya. toh amar kache tader code tare 0 base indexing 
ana amar kache hard mone hoiche. but emon na je partam na. but oikhane push korar shomoy -1; korche s ar t re decrease korche. 
ei arki. 

ar ami jodi chai 1 base indexing e korar jonno. taile oita aro easy. just jei data structrue gula orthat vector gula nita oigulare 
just 1 size beshi niba. ei tuku e. 
*/
