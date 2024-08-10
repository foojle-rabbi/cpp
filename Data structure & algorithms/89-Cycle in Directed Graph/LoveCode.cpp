#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

void dfs(unordered_map<int, list<int>> adj, int src, unordered_map<int, bool> &visited){
    cout << src << " ";
    visited[src] = true;

    for(auto i : adj[src]){
        if(!visited[src])
        dfs(adj, i, visited);
    }
}

bool isCycelDG(unordered_map<int, list<int>> adj, int src, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited){
    visited[src] = true;
    dfsVisited[src] = true;

    for(auto i : adj[src]){
        if(!visited[i]){
            if(isCycelDG(adj, i, visited, dfsVisited)){
                return true;
            }
        }else if(visited[i] && dfsVisited[i]){
            return true;
        }

    }
    dfsVisited[src] = false;
    return false;
}

int main()
{
    /*
    Accha eita hocche amader detect cycle in directed graph er question. jak bepar na. eikhane kotha hocche eita amder solve 
    korte hobe maybe dfs Algorithm dia. accha tar age ami dfs er function make kori. 
    */

    //if we had our dis connected nodes;

    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
    int v = 6;

    for(int i = 0; i < v; i++){
        if(visited[i] != true){
            dfs(adj, i, visited);
        }
    }
    return 0;
}