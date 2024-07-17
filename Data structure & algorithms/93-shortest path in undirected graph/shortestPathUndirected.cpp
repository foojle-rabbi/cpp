#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>

using namespace std;

/*
Eikhaneo ekta notun ki dekhlam janosh? graph er most of the probelm e bfs ar dfs lage. ekhon kotha toh sotto karon jehetu 
graph traverse e kora hoy amar bfs ar dfs er sahajje tobe eikhaneo ekta kahini ache ki janosh? toh tar moddhe beshir vag gular 
moddhe amar need hoy bfs traversal. (jodio eita 100% true na). but eikhane bfs er jei approach sheta onektai amar level order 
traversal er motoi. orthat level wise shob kichu print kore arki. 
*/

//------- solution -------------
vector<int> cyclePresent(unordered_map<int, list<int>> &adj, int src, int destination){
    /*
    Eita amader onekta bfs traversal er mototi but with some changes. jemon eikhane amader just ekta extra data structure e.g 
    vecotr need hobe to track the parents. ar pore just last e tomare jei destination dibo tar parent ber korte thako jotokkhon na 
    na tumi source node khuje na pao. ar jei gula paiba oigula e tomar ans. ar jodi weght deoya thakbe tahole ekta extra count
    variable niba. joto bar loop cholbe totobar count++; then return the count;
    */

    unordered_map<int, bool> visited;
    vector<int, int> parent;

    queue<int> q;
    q.push(src);
    //eibar src node er parets kro -1 ar visited true;
    parent[src] = -1;
    visited[src] = true;

    //eibar do normal types of bfs;
    while(!q.empty()){
        int front = q.front();
        q.pop();

        //eibar ei front node er neighbours gula re ber koro
        for(auto neighbour : adj[front]){
            if(visited[neighbour] != true){
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = front;

                //orthat neighbour gulare ber kore unvisited hoile queue te push koro ar sathe parent ar visited true kro;
            }
        }

        //eibar loop theke ber hole protita node er paretn set hoy geche. toh ekhon destination er parent khuje ber koro jotokkhon
        // porjonto na src node khuje pao;

        int currentNode = destination;
        vector<int> ans;
        while (currentNode != src)
        {
            currentNode = parent[currentNode];
            //ekhon chaile eikhane ekta ans variable currrent node gulare store korte paro or print korte paro. 
        }

        return ans;
    }
}

int main()
{
    /*
    Kono ekta undirected graph deoya thakbe amake ebong sathe ekta source and desination deoya thakbe amake oikhan theke shortest
    path (src -> destination) return korte hobe using dfs korbo mone hoy. maybe cause ami pura ta valo kore dekhi nai. 
    */
    return 0;
}