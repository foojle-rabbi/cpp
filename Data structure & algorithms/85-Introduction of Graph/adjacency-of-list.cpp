#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

void addEdge(unordered_map<int, list<int> > &adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

    // cout << "Add edge function called\n";
}

void printGraph(unordered_map<int, list<int> > &adj, int v){
    cout << "Adjacency of list\n";
    for(auto i : adj){
        cout << i.first << " -> ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
    // cout << "print function called";
}

int main()
{   
    cout << "main function called\n";
    int v = 4;
    unordered_map<int, list<int> > adj;

    // addEdge(adj, 1, 2);
    // addEdge(adj, 1, 3);
    // addEdge(adj, 2, 3);
    // addEdge(adj, 3, 4);
    // cout << "Came to 35 number line\n";
    

    //jak uporer code gula re aro shundor vabe function deoya jabe using while loop
    // dekhi swith use kore. nah switch theke better loop e use korlam. 
    
    // char ch = 'c';
    // do{
    //     cout << "Enter the edges: ";
    //     int a, b;
    //     cin >> a >> b;
    //     addEdge(adj, a, b);
    //     cout << "Enter c for continue..... q for exit: " << endl;
    //     cin >> ch;
    // }while(ch != 'q');

    int n;
    cout << "enter the number of edges: ";
    cin >> n;

    while(n--){
        int a, b;
        cin >> a >> b;
        addEdge(adj, a, b);
    }
    printGraph(adj, v);
    return 0;
}

//dhuru chata kaj kore na keno? ami maybe stl gula re thik moto use korte partechi na. 
/*
Finally found out the problem and solve that. the problem was that ki, ami vector<int> adj[size] use kortechilam as ami eitar
valo kore use korte jani na. jodio hello world channel theke dekhchi but kivabe solve kore oita bujhte pari nai. she jonno thik 
moto output ashtechilo na. but ekhon jehetu unordered_map<int, list<int> > use kortechi tai ekhon abar thik moto e kaj korteche. 
*/

// 0 1 0 2 1 3 1 2 2 3 2 4 4 3