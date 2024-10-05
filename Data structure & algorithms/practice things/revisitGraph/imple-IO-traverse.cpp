#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

class graph{
    public:
    int vertices, edges, u, v;
    vector<int> adj[10];
    // vector<bool> visited(10, false);
    //dont know what the problem but its not working.
    unordered_map<int, bool> visited;
    void takeInput(){
        cout << "Enter the number of vertices: ";
        cin >> vertices;

        cout << "enter the nubmer of edges: ";
        cin >> edges;

        cout << "Enter the edges ";
        for(int i = 0; i < edges; i++){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    void display(){
        cout << "Content of adj list: " << endl;

        cout << "Number of vertices: " << vertices << endl;
        for(int i = 0; i < vertices; i++){
            cout << i << " --> ";
            for(auto j : adj[i]){
                cout << j << " ";
            }
            cout << endl;
        }
    }

    //eikhane dis connected graph o thakte pare but amra apato simplicity er jonno shudhu connected graph nilam
    void bfs(int src){
        //I dont remembered the whole code of this algo. but yes i could code. first we need a queue, visited 
        visited[src] = true;
        queue<int> q;
        q.push(src);

        while(!q.empty()){
            int front = q.front();
            q.pop();

            cout << front << " ";

            for(auto neighbour : adj[front]){
                // q.push(neighbour);
                // visited[neighbour] = true;
                //eikhnae ami ekta vul korchi sheta hocche push korar age check kori nai je eita ki age theke visited kina
                if(visited[neighbour] != true){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }

    void dfs(int src, vector<bool> &vis){
        vis[src] = true;
        cout << src << " ";

        //ekhon baki gular jonno dekho
        for(auto i : adj[src]){
            if(vis[i] != true){
                dfs(i, vis);
            }
        }
    }

    
};

int main()
{
    //bohut hoche eikhane abar notun kore ajke graph er basic jinish gulare jhalai dibo.
    graph g;
    g.takeInput();
    g.display();
    g.bfs(1);

    cout << endl << "Output of dfs visited: ";
    vector<bool> vis(10, false);
    g.dfs(0, vis);
    return 0;
}

//After a long time of gap. today i sat for code. so there were a lot of common mistakes that i did. But in-shaa-allah i will
// improve day by day after getting these types of errors and by debuging them.