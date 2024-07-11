#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
#include<stack>
using namespace std;

unordered_map<int, list<int> > adj;
void takeInput(int vertices){
    int u, v;

    cout << "Enter the input string: ";
    while(vertices--){
        cin >> u >> v;

        adj[u].push_back(v);
    }
}

void display(void){
    cout << "Adjacent list: " << endl;
    for(auto i : adj){
        cout << i.first << " --> ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
}

void dfs(unordered_map<int, bool> &visited, int src){
    cout << src << " ";
    visited[src] = true;

    for(auto i : adj[src]){
        if(visited[i] != true){
            dfs(visited, i);
        }
    }
}

/*
Topological sort; jaak alhamdulillah khub easily e topological sort ta code korte parlam. accha ekhon ami tomake bujhai ashole 
topological sort ta ashole ki? topological sort hocche emon ek prokarer algorithm jeikhane kono ekta adjacency list er jei u 
ache ta shob shomoy v er aage appear korbe. ar hae ei algorithm ta kebol DAG(directed acyclaic graph) er moddhei projojjo. 

toh eita ashole kivabe code kora jay. code as simple as dfs. orthat deapth first seach er moto. but eikhaneo ekta extra data 
structure lagbe which is our stack. amra just protibar kono ekta call theke return korar shomoy oi src node tare stack e push 
kore dibo. bash amader topologial sort hoye gelo; tor bujhar shubidhar jonno ekta example dia dei.

---------------------------------------
dekh niche 2 ta directed graph ache toh oikhaner first er ta na nia second tar example dei. oi tar input stirng dia tui jodi 
code ta run koroch taile tor. oitar adjacency list o aibo abar loge dekhbi chaile dfs traversal o print koraite parbi. abar chaile
tui topological er value o print koraite parbi. toh oikhane dekhbi je dfs er output e ekrokom ashteche. ar topological er output
e ek rokom ashteche. 

onno rokom bolte oikhane dekhbbi graph er adacecy er prottek ta u, v er aage print hoiteche. eitai kahini. i thikk these things
make sence. 

jah ekhon ar temon kichu korar dokar nai. just last er jei grpah ache sheitar input dich. ar dfs er output ar toposort er output
er compare korish. dekhbi topo er moddhe each u's value is appearing before v's value;
*/

void topoSort(unordered_map<int, bool> &visited, int src, stack<int> &s){
    visited[src] = true;

    for(auto i : adj[src]){
        if(visited[i] != true){
            topoSort(visited, i, s);
        }
    }
    s.push(src);
}

int main()
{
    /*
    Topological sort using dfs algorithms. 
    What is topological sort? 
    --> topological sort holo emon ek dhorner algorithm jeikhane protita u - v er aage appear hobe. suppose you have a ajacent 
    list: 
        1 --> 2
        2 --> 3 4
        3 --> 4 
        4 --> 5 6
        5 --> 
        6 --> 
    taile eikhane amar topological sort hobe: emon je shob shomoy amar 1, 2, 3, 4, 5, 6 tar moddhe thaka list er value er aage
    print hobe. 
    */

    int nodes;
    cout << "enter the number of nodes: ";
    cin >> nodes;
    takeInput(nodes);
    display();

    // suppose my grpah is discontinoued
    unordered_map<int, bool> visitedDfs;
    cout << "Dfs traversal: ";
    for(int i = 1; i <= nodes; i++){
        if(visitedDfs[i] != true){
            dfs(visitedDfs, i);
        }
    }cout << endl;

    
    //------------topological sorts code----------
    unordered_map<int, bool> visited;
    stack<int> s;

    for(int i = 1; i <= nodes; i++){
        if(visited[i] != true){
            topoSort(visited, i, s);
        }
    }

    cout << "Topological sort: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}

/*
Input string of a directed grpah: 6 1 2 2 3 2 4 3 4 4 6 4 5
adjacent list: 
        1 --> 2
        2 --> 3 4
        3 --> 4 
        4 --> 5 6
        5 --> 
        6 -->

arekta grpah er adjacency list er input string: 8 3 4 3 2 2 1 1 5 5 7 6 5 6 8 8 7
*/

//last notebook's graph: 4 1 2 1 4 3 4 4 5 