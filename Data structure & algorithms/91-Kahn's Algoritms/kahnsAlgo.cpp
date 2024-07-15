#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

/*
Kahn'a algorithms: 
    1. Find indegrees of all nodes
    2. Make a queue and push the nodes which have 0 degree.
    3. Do bfs with some changes
        a. pop front node
        b. find the neighbours
        c. degrees the indegree
        d. now at the same time push the nodes which indegrees become o after removing front node. 
*/

class grpah{
    public:
    unordered_map<int, list<int> > adj;
    int vertice, u, v;

    void takeInput(int n){
        while (n--)
        {
            cout << "Enter the input string of a directed grpah: ";
            cin >> u >> v;
            adj[u].push_back(v);
        }
    }

    void display(void){
        cout << "Adjacent of directed grpah: ";
        for(auto i : adj){
            cout << i.first << " --> ";
            for(auto j : i.second){
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void topoUsingBFS(void){
        //eita temon kichu na. topoligical sort using bfs. ar topological sort mane u appear hobe v er aage. 
        cout << "Topo using bfs called " << endl;
        queue<int> q;
        vector<int> indegree(6);
        for(auto i : adj){
            cout << "Entered into the indegrees loop" << endl;
            //eikhane kothao vul ache. i dont know where but eikhanei. cause er porei ar loop chole na. 
            for(auto j : i.second){
                indegree[j]++;
            }
        }

        cout << "checking which indegree has 0" << endl;
        for(int i = 1; i <= 6; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        cout << "doing bfs with some changes" << endl;
        while (!q.empty())
        {
            int front = q.front();
            q.pop();

            cout << front << " ";

            for(auto i : adj[front]){
                indegree[i]--;

                if(indegree[i] == 0){
                    q.push(i);
                }
            }
        }
        cout << "Queue is now empty " << endl;
        
    }  
};

int main()
{
    /*
    Sohoj banglay bolte gele eta hocche amader topological sort er bfs approach. er ager folder e amra dekhe aschi je kivabe topological 
    sort algorithm implement korte hoy using dfs traversal. ar hae mone koira dei je, topological sort hocche amader emon ek algorithms
    jei khane each and every u will be appeard before v. ar eita kebol DAG (directed acyclic graph) er jonno projojjo. 

    accha bakita kaal ke solve korbo ne. 

    ajkei amader shei kangkhito kaal. but ajkeo solve korar kono nam gondho nai. jehetu ami aste aste onek olosh hoiya jaitechi
    porashonar moddhe toh nai ekfoTa monojog. saradin khali time paileo mobile mobile ar na hoy overthinking. tao abar kare nia thinking 
    jano? thinking ase emon ekjon re nia ja vabar bahire. tar proti nai kono oi rkom feelings. fao koshto paitechos Fojle. tai eishob theke
    fire aay. ar ekhon eitar algorithm lekh:

    Kahn's algorithm er jonno amra jehetu bfs traversal er use korbo tai shob kichu e same. mane amder ekta queue need hobe. tar sathe
    ekta arra, vector needed to store the indegree of each nodes. 
    */

    int vertices;
    grpah g;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    g.takeInput(vertices);
    g.display();
    g.topoUsingBFS();
    return 0;
}

/*
Input string: 6 1 2 1 3 3 6 6 4 4 5 6 5
*/