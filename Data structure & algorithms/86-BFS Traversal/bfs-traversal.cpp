#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class grpah{
    public:
    unordered_map<int, list<int> > adj;
    int vertices, num1, num2;
    unordered_map<int, bool> visited;

    void takeInput(void){
        cout << "Enter the number of vertices: ";
        cin >> vertices;
        //first e tomar graph er moddhe koto ta vertice ache tar number ta nia neo. jate kore ekta loop use kore shob gula 
        //vetice input akare noeya jay. 

        cout << "Enter the input string: ";
        while (vertices--)
        {
            //jei jei node er moddhe connection ache shei 2 ta number input hisabe neo. then list er moddhe push back koro. 
            cin >> num1 >> num2;
            adj[num1].push_back(num2);
            adj[num2].push_back(num1); // jehetu kono direction nai tai 2 tar moddhei push back kora lagbe. 
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

    /*
    Vai bfs traversal o emon ahamori kothin kichu na. eita tor onekta tree er level order traversal er motoi. orthat first er
    je kono ekta source nibi. then oi source tare ekta queue te push korbo. then eitare por korar por print korbi. ar dekhbi
    eitar sathe connected ache. jeigula conncted ache oigulare push korbi queue. but eikhane ekta jinish jate mathay thake je
    amra each time shudhu ekta node re ekbar e print korbi. tai shei track rakhar jonno dorkar ekta visited array, vector, orthoba
    ekta map. bach eituku e. 
    */

    void bfs(int source){
        queue<int> q;
        q.push(source);
        visited[source] = true;

        cout << "Output of bfs traversal: ";
        while(!q.empty()){
            int front = q.front();
            q.pop();

            cout << front << " ";

            for(auto i : adj[front]){
                if(visited[i] != true){
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
};

int main()
{
    grpah g;
    g.takeInput();
    g.display();
    g.bfs(0);
    return 0;
}

/*
Input string: 7 0 2 0 3 2 3 2 1 3 1 3 4 1 4
*/