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
        c. decrease the indegree
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

        //i think amar main vul tai hoiche eikhnae. jemon eikhane ami joto ta degree thik toto tai vector nichi. tobe i heard that
        //it is safe to take n + 1; and ami arekta vul korchi je shobgulare 0 dia initialize kori nai. 
        vector<int> indegree(7, 0);

        //wrong 
        // vector<int> indegree(6);
        
        //pura ta grpah traverse kore indegrees er man gula store koro. 
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

/*
---------------------final thoughts -----------------
accha ei koyekdin dhoira toh ami nijer sathe onek luko chori korlam. ar koto lukochori korbo? jak ja houar hoiche ekhon samner
dike agaite hobe. kotha hocche ei koyekdin dhore amra grpah kortechila. toh grpah er moddhe prothome amader jei topics gula 
chilo sheigula holo graph koy dhoroner ar kivabe sheigula make kore. then amra ashlam bfs ar dfs algorithms e orthat kivab e 
kono ekta grpah ke traverse korte hoy sheigula. 


ar graph er moddhe chilo amader directed grpah, undirected graph, weighted, unweighted etc. aaccha ero age boli je amader jei
bfs ar dfs ache. bfe onektai amader level order traversal er moto. jekhane ekta visited vector lagbe. ar sathe queue lagbe. thik ache
then amader jei dfs traversal ache oikhane amader recusive call dorkar hoy to traverse the whole grpah.

then amader eikhane topics ase cycle detection e. orthat amader grpah e ashole kono cycle ache kina oita detect korte hobe. toh
jehetu amader kache traversal method o 2 ta tai detect korar method o 2 ta. but but ei 2 method hoiya jey 4 ta kivabe? ekta hocche
amader directired ar arekta hocche undirected graph er jonno. 

toh undirected graph e cycle using bfs ber kora easy. with using parents concept. ar dfs e korar jonno 2 ta extra data structre
need hoy one is visited and other is dfs visited. 

tar por ashe amader to topological sort. toh topological sort hocche emon ekta traverse korar way in a acyclic grpah. orthat 
jei graph e amar kono cycle nai. shekhane each u will appear before v. eitai. toh prothome toh khub easyly dfs dia eita kora 
jay. jar jonno beshi kichu na just ekta stack need hoy. pore khali stack er top theke pop korlei hoiya gelo amar topo logical 
sort using dfs. mane recursive solution.

then ashe amader kahn's algorithms er topic. toh jei ta alada kichu na. just topological sort er bfs approach rei kahn's alorithms 
bola hoy. jeita o emon ahamori kono hard kichu na. upore step by step process deoya ache deikha nich. beeeeccch ei tuku e./ 

*/