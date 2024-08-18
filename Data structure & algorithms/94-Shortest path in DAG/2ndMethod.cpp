#include<iostream>
using namespace std;

class solution{
    public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // accha ajke amra amader ei solution e priority queue use korbo. jar arek nam min heap
        vector<bool> visited(V, false);
        vector<int> distance(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        
        distance[S] = 0;
        minHeap.push(make_pair(0, S)); //initially amader source node hocche o + distance o 0;
        
        while(!minHeap.empty()){
            int current_node = minHeap.top().second; //amra kintu amader heap er moddhe 2 ta value
            //push dichilam. tar moddhe first ta hocche distance ar 2nd ta hocche node. jeehtu amader node dorkar. tai second value nilam.
            minHeap.pop();
            
            //pop je korchot. dekh je oita ki amar already visited kina? jodi visited hoy taile toh skip kora dorkar
            if(visited[current_node]) continue;
            
            //eibar ei node re visited mark koren
            visited[current_node] = true;
            
            //eibar ei current node er jono neighbour ache tader ke accehss korar try koren.
            for(auto edges : adj[current_node]){
                int neighbour_node = edges[0];
                int weight = edges[1];
                
                //eibar neighbour node ache weight o ache. so compare koro je present e jei node ta ache tar jei distacne tar sathe
                // jodi neighbour node er weight er value + kore. tokhon value ta ki ager value theke choto ase kina? jodi ashe
                // tahole update korbi. ar jodi na hoy tokhon skip;
                if(distance[neighbour_node] > distance[current_node] + weight){
                    distance[neighbour_node] = distance[current_node] + weight;
                    
                    //eibar ei node tarei push kro heap er moddhe
                    minHeap.push(make_pair(distance[neighbour_node], neighbour_node));
                }
            }
        }
        
        return distance;
    }
};

int main()
{
    
    return 0;
}