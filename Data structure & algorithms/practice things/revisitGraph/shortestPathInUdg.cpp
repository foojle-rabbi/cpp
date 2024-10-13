#include<iostream>
using namespace std;

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// Write your code here
	//frist e adj list make koro
	vector<int> adj[n + 1];
	for(int i = 0; i < m; i++){
		int u = edges[i].first;
		int v = edges[i].second;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<bool> visited(n +1, 0);
	vector<int> parent(n +1, -1);
	queue<int> q;
	q.push(s);
	visited[s] = true;

	while(!q.empty()){
		int front = q.front();
		q.pop();

		//now find the neighbours
		for(auto i : adj[front]){
			if(!visited[i]){
				q.push(i);
				parent[i] = front;
				visited[i] = true;
			}
		}
	}

	if(t == -1){
		return {};
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
Uporer code ta hocche amader new code. tobe tar poreo eikhaneo koyekta mistake kore felechi. like ami jei adj list ta 
nichi oitar size n declare korchi. but declare okrte hobe n + 1. Karon 1 base indexing. ekkebare same visited + parent
er kkehtre o projojjo hobe. 


ar arekta case mathay rakhte hobe je t == -1; hoy mane kono path na thake tahole empty ans return koro. 
*/

int main()
{
    /*
    Tahole first e amra question ta bujhar chesta kori je question tare ki bola ache? question e bola ache je amader ke 
    ekta undritected graph deoya thakbe. ebong oi grpah er moddhe amake s to t means source to target jete hobe. ar oi 
    target e jaoyar onekgula e path thakte pare. but amake kebol shortest path tai dite hobe. ar eikhane amra edges er
    value 1 assume kore nilam. 

    link: https://www.naukri.com/code360/problems/shortest-path-in-an-unweighted-graph_981297?count=25&page=7&search=&sort_entity=order&sort_order=ASC
    
    approch: ekhon ashi kivabe ei problem ta solve korte hoobe. ashole problem ta solve korao easy. proti barer moto 
    eibar o amra bfs algorithm use korbo. tobe majhe parents gula track rakhar jonno ekta parent vector need ache. 

    tar poreo jodi kono path exists na kore tokhon empty vector return korba. ar path ber korar jonno target jotokkhon na 
    -1 hocche totokkhon while loop cholbe. 
    
    */
    return 0;
}

/*
Accha ei question ta onek age ekbar age korchilam. ar ajke aisha abar revision dite ashci. ar ei bar graph er jei question 
gula ache eigula ami oto ta valo vabe bujhtam na. bujhi o nai. er age quetion solve kore submit o korchi and accept 
o hoiche. kintu kono dry run kori nai. jar karone ekhon aisha vuila jaitechi. 

doro ei je question ta eita kintu kora hoiche. kintu jei logic shei ta vuila gechilam. kintu ekhon dekhar por aisha abar 
mone hoiche. toh eitar logic ta hocche ekta extra vector rakhte hobe for tracking parents. then oikhan theke kivabe kore
oita purapuri mone nai 

she jonno e dry run korte hobe. jeta insha-allah kalke korbo. ajke amma aschilo tai ektu kotha hoichio. ar shorirer 
condition o temon valo na. 
*/