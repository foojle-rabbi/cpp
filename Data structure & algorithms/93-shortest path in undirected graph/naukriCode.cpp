vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// Write your code here
	//accha eitao amader oi rokom ahamori kothin kono problem na. normal bfs algorithm dia e solve hoiya jay. but 
	//eitar moddhe ekta extra mapping dorkar which is "parent" to track the parent node. 

	//first e amader jei vector deoya ache oita theke adjacent list banaiya loi
	vector<int> adj[n];

	for(int i = 0; i < m; i++){ //accha eikhane amar n naiya m hoyar kotha. cause n = vertices and m = edges;
		// int u = edges.first;
		// int v = edges.second;
		//uporer ta vul

		int u = edges[i].first;
		int v = edges[i].second;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	//accha eibar aamder list ready. so now amader koyekta mapping dorkar to do bfs
	// vector<bool> visited(n);
	vector<bool> visited(n, 0); //eivabe declare kora uchit
	vector<int> parent(n, -1); //ekta parent neo ar initially -1 dia rakho. 
	queue<int> q;
	
	//eibar queue te src node push koro sathe visited ar parent node set kore deo
	q.push(s);
	visited[s] = true;
	parent[s] = -1;

	while(!q.empty()){
		int front = q.front();
		q.pop();

		//eibar neighbour ber koro
		for(auto i : adj[front]){
			if(visited[i] != true){
				q.push(i);
				parent[i] = front; //jeehtu front hocche main node ar i hocche tar neighbour tai i er parent hobe front;
				visited[i] = true;
			}
		}
	}

	//ekhon bfs complete hole parent node er moddhe shob set hoye geche. now ekta loop ghurao jotokkhon na porjonto
	//destination theke src na paoya jay. 
	vector<int> ans;
	// ans.push_back(t);

	// while(t != s){
	// 	ans.push_back(parent[t]);
	// 	t = parent[t];
	// }

	//amar uporer code ta vul hoiche. it should be
	while(t != -1){
		ans.push_back(t);
		t = parent[t];
	}

	reverse(ans.begin(), ans.end());

	return ans;
	
}

//net work e problem korteche. pore submit korbo na hoy. but i think this code will work now. 