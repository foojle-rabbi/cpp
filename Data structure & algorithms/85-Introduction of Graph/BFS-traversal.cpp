#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

/*
Vaiye shono monojog shohokare shono ei je bfs traversal ahamori kothin kichu nare vai. er karon hocche eita amader 
onektai Tree er level order traversal er motoi. orthat age je kono ekta node re dhoro then ei node er sathe joto gula
vertices conncected ache tader shobgulare joor koira queue te falao then ekta ekta koira pop koro print koro. ar dekho 
je oitar moddhe o ar kono vertices connected ache kina? jodi thake tahole oigulare push koro. tobe hae eita jeno mathay 
thake je ekta node re ekbar e jeno visit kora hoy. orthat ekbarer beshi jeno kono node print na hoy. shejonno amader eigual 
track rakhar jonno dorkar ekta map, vector etc. 
*/

class adjList{
    public:
    unordered_map<int, list<int> > adj;
    unordered_map<int, bool > visited;
    int nodes, vertices, a, b;

    void take_input(){
        cout << "Enter the number of vertices: "; 
        cin >> vertices;

        cout << "Enter the input string: \n";
        for(int i = 0; i < vertices; i++){
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    }

    void display(){
        cout << "Adjacency of list: " << endl;
        for(auto i : adj){
            cout << i.first << " --> ";
            for(auto j : i.second){
                cout << j << " ";
            }
            cout << endl;
        }
    }

    /*accha uporer amar jei code gula kora hoiche asha rakhi oigular moddhe kono problem thakar kotha na. cuase adj of matrix
    ar adj of list mutamuti aage thekei kora. Jodio amader bfs and dfs o aage thekei kora but c++ dia ei first ei kora hoiteche
    plus aage toh etto kichu bujhtam na. kivabe queue kaj kore map ki. visiited array marry ki. 

    Jaak oigula hocche amar past er kotha ekhon kotha hocche er niche ami bfs traversal er code korbo. 
    */

    /*
    Bfs iyani Breadth first search. jodi aro shohoj banglay bolte chai tahole bolte hoy je eita amader onek ta Tree er level 
    order traversal er motoi. mane first e jekeno ekta node ke dhorba then eitar sathe connected joto gula node ache oi shob 
    gula node re ekta queue push korba. then joto kkhon porjon na amader oi queue ta empty hocche totokkhon porjo khali loop 
    chalaite thakba. ar protibar e queue theke node pop korba ar print korar por abar er sathe connected gulare push korba. 

    ar hae arekta kotha jate kono ekta node er value 1 barer beshi print na kora hoy she jonno use kora hoibo ekta visited array
    vector othoba kono unordered or ordered map.

    baach eituku. ar baki ta aasha kori code korte bujhte parbi. 
    */

    /*ar hae eikhane arekta kotha ache sheta hocche gia je amader shob shomoy e bfs korar jonno ekta source deoya thakbe. \addindex
     ar jodi nao deoya thake tahole amra loop use kore korte parbo. mane tokhon amader ke koto vertices ache tar number deoya 
    thakbe toh number deoya thakle amara ekta loop ghurabo. then oi number porjonto shob gulare source banao ar bfs function re 
    call korbo
    */

    void bfs(int source){
        //jehetu eita ami ekta class er moddhe korte she jonno amar ar alada kore vertices ar adjecnt list er dorkar porteche 
        // na but jodi eita ami calss er bahire kortam tahole amar abar thiki oi baki 2 ta jinish lagto. 

        //first e ekta visited map create kore neo.
        // unordered_map<int, bool> visited; visited tare eno declare na kore ami eitare class er moddhe o to korte pari. 
        queue<int> q;
        q.push(source);
        visited[source] = true;
        //jak upore queue nilam oikhane first e souce vertice tare push korlam ar tare visited mark kore dilam. 

        //ekhon ekta loop chalabo jotokkhon na porjono amar queue ta empty hocche 
        while(!q.empty()){
            //ekhon queue te thaka first node tare pop koro 
            auto front = q.front();
            q.pop(); //sathe pop o kore felo;

            //ekhon eitare print koro 
            cout << front << " ";

            //eibar dekho ei front node er sathe ar kara kara connected ache. jara jara connected ache tader sobaire abar queue 
            //te push koro jodi na tara unvisited hoiya thake. 

            for(auto i : adj[front]){
                if(visited[i] != true){ //Dekho je oi node gula not visited kina.
                    //jodi visited na hoy taile queeu te push koro then visited marks kore deo.
                    q.push(i);
                    visited[i] = true;
                } 

            }
        }
    }

    //ar jodi amare kono source deoya na thakto taile amare ekta loop ghuraite hoito 
    void bfsDisc(int ver){
        for(int i = 0; i < ver; i++){
            if(visited[i] != true){
                bfs(i);
                visited[i] = true;
            }
        }
    }
};

int main()
{
    /*
    BFS = breath first search. Means aage tmi tomar breath orthat kono ekta node er sathe jei jei vertics gula connected ache
    aage oigulare visit korba then baki gulare. suppose amar kache just ekta node ache toh ami khlai oi node er sathe joto gula 
    node connect thakbe ami oigulare aage visit korbo maybe using queue. 
    */
    adjList lst;
    lst.take_input();
    lst.display();
    // lst.bfs(0);
    lst.bfsDisc(4);
    return 0;
}

// input string: 0 1 0 2 1 3 1 2 2 3 2 4 4 3