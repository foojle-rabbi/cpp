#include<iostream>
#include<unordered_map>
#include<list>
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

    void dfs(int src){
        //first e amake ekta source deo. ar hae eikhane ami kono discrete grpah nicchi na. orthat sigle graph nitechi.
        //ekhon src node er value print koro. then tare visited marks kore deo.
        cout << src << " ";
        visited[src] = true;

        //eibar dekho je source node er sathe ar ke ke connected ache. tar por prothome je connected ache tar jonno recursively
        // dfs function re call koro. 
        for(auto i : adj[src]){
            if(visited[i] != true){
                dfs(i);
            }
        }
    }
};

int main()
{
    /*
    Dfs mane Deapth first search. orthat aage tmi deapth e jao then traverse koro. ar deapth first seach e amora mainly 
    recursive function er use korbo. ashole ahamori temon kothin kono tai nai. just khali ektu monojog dia porlei easy lage
    but jodi monojog na thake tailei main problem. 

    nah thik thak motoi amader dfs function o kaaj korteche. 
    */
    grpah g;
    g.takeInput();
    g.display();
    g.dfs(4);
    return 0;
}

/*
Input string for two grpah; 
grpah 1 : 7 0 2 0 3 2 3 2 1 3 1 3 4 1 4
graph 2: 4 0 3 1 3 2 3 2 4
*/