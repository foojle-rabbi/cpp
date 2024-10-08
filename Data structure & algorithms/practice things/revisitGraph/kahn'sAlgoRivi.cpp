#include<iostream>
using namespace std;

/*
Accha eikhane ekta notun jinish valo kore shikhte parlam. sheta hocche kivabe indegree ber kore. indegree ber korar 
jonno amake number of V times iterate korte hobe. then oikhane each node er neighbour gula re itertate kore indegree[i]++
korte hobe. taile e indegree ber hobe. suppose you have a adj list;
    1 --> 2
    2 --> 3 4
    3 --> 4 
    4 --> 5 6
accha sohoj kothay bolle. amar node er side e kono ekta number joto bar thakbe tai tar indegree. she jonno e amra 
iterate korar shomoy neighbour gula re iterate kori then ++ kore dei. orthat amar neighbours gula koto bar ache 
tar shongkha e holo indegree.

2. arekta jinish janlam je topological sort er onekgula possible solution o ache. 
*/

public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   vector<int> indegree(V+ 1, 0);

	   for(int i = 0; i < V; i++){
	       for(auto neighbours : adj[i]){
	           indegree[neighbours]++;
	       }
	   }
	   
	   queue<int> q;
	   //eibar check koro kon kon node er indegree 0
	   for(int i = 0; i < V; i++){
	       if(indegree[i] == 0){
	           q.push(i);
	       }
	   }
	   
	   vector<int> ans;
	   
	   while(!q.empty()){
	        int front = q.front();
	        q.pop();
	        
	        ans.push_back(front);
	        
	        for(auto i : adj[front]){
	            indegree[i]--;
	            if(indegree[i] == 0){
	                q.push(i);
	            }
	        }
	   }
	   return ans;
	}

int main()
{
    /*
    Link of gfg: https://www.geeksforgeeks.org/problems/topological-sort/1
    */
    return 0;
}

/*
Accha ajke toh ekta jinish valo vabe bujha hoiche. ar kahn's er steps gula o mone ache insha-allah kalke dekhi kemon
mone thake. then oi onujayi code kore gfg te submit korbo.

steps:
1. indegree ber korba
2. dekhba kontar indegree 0 ache. 
*/

// 1 --> 2 3
// 2 --> 4 5
// 3 --> 
// 4 --> 
// 5 --> 
// 6 --> 5

/*
Kalke toh topo er logic ta ektu ghaita dekhchilam but code kori ei jonno jate ajke code + dry run 2 tai korte 
pari. 

0 --> 
1 --> 
2 --> 3
3 --> 1
4 --> 0 1
5 --> 0 2

Accha eitar dry run ami korechi. tobe eikhane ami ekta notun jinish kheyal korlam je eikhane visited array
er dorkar nai. just step gula hocche: 
    1. indegree ber korba. ar indegree mane bolte bujhte paro emon je adj list ber korba. then dekhba neighbour
    er moddhe ei node ta koto bar ashte. joto bar ashte tar count e hobe indegree. ar indegree mane hocche onno
    node theke koto ta direction amar kache ashteche. 

    2. eibar indegree er moddhe jeigular count 0 hobe tader ke queue te push korba. they can be more than 1 node. 
    orthat indegree = 0; onekgula node e hoite pare. then ekta ekta kore node queue theke pop korba. then pop korar
    pore indegree er value 1 - minus korba. and eki sathe check korba je indegree = 0; hoy kina. jodi hoy tahole queue
    te push korba. 

    3. evabei process ta cholte thakbe jotokkhon porjonto queue empty na hocche. 

    ar mone rakhte ekta graph er more than 1 topo sort thakte pare. which is normal. but remember that u will be appear
    before v. ba sohoj kothay koite gele neighbours er age adj list er left side er man gula age ashbe. 
*/