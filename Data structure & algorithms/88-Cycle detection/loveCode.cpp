#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
#include<vector>
using namespace std;

void takeInput(unordered_map<int, list<int>> &adj, int edges){
    cout << "Enter the input string: ";
    
    for(int i = 0; i < edges; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void display(unordered_map<int, list<int>> adj){
    for(auto i : adj){
        cout << i.first << " -> ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
}

bool isCycle(unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, int src){
    //vai etokkhon jeigula korchot oigula normal code er moto na? orthat normal bfs treaversal jeivabe kore shei same
    //code na? ashole hoo. just eikhane same bfs korbi with one extra logic. eituku e....
    cout << "I am on is cycle function" << endl;
    vector<int> parent(7); // accha taile main problem eikhane;
    /*
    Orthat each time ami vul kori kothay jano? ami vul kori hocche gia vector declaration e cause proti bar ami number dei na
    orthat size deoya pore na shejonno amar fcuntion vul kaj kore. but jokhon ami size dilam tokhon abar thik thak moto e kaj 
    korteche. 
    */
    queue<int> q;
    q.push(src);
    cout << "pushed item" << endl;
    parent[src] = -1;
    cout << "set paretn " << endl;
    visited[src] = true;

    cout << "Before while loop " << endl;
    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto neighbour : adj[front]){
                cout << "Entered into the loop" << endl;
            if(visited[neighbour] != true){
                visited[neighbour] = true;
                parent[neighbour] = front;
                q.push(neighbour);
            }else if(visited[neighbour] == true && parent[neighbour] != front){
                cout << "Entered into the else if function" << endl;
                return 1;
            }
        }
    }
    return false;
}

int main()
{
    int vertices = 6;
    int edges = 6;
    unordered_map<int, list<int> > adj;
    unordered_map<int, bool> visited;

    takeInput(adj, edges);
    display(adj);
    bool ans;
    for(int i = 0; i < edges; i++){
        if(visited[i] != true){
            cout << "isCycle fucntion called" << endl;
            ans = isCycle(adj, visited, i);
        }
    }
    
    if(ans){
        cout << "cycle is present" << endl;
    }else{
        cout << "Cycle is not present" << endl;
    }
    return 0;
}

/*
Input string: 1 2 1 3 3 6 6 4 4 5 6 5
*/