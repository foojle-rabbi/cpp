public:
    bool getAns(int src, unordered_map<int, bool> &visited, vector<int> adj[], unordered_map<int, bool> &dfsVisited){
        dfsVisited[src] = true;
        visited[src] = true;
        
        for(auto i : adj[src]){
            if(visited[i] != true){
                /*
                Accha eikhaneo ekta question thakte pare je vai eikhane abar keno condition ashteche. accha eikhane jodi amra codition
                use na kori ba kono variable use kori taile kintu amader whole vertices gula traverse korte hobe  but jodi codition use 
                kori taile jokhon e amader cycle detect hobe tokhon e ans return korbe fole amader ar extra kore baki nodes gula traverse 
                korte hobe na. ba onek shomoy jodi condition na boshi taile amader ans change hoiya jaibo. ba false ans ashbe. 
                 */
                if(getAns(i, visited, adj, dfsVisited)){
                    return true;
                }
            //condtion ta hoolo jodi visited && dfs visited true hoy tokhon e oi grpah e cycle ache. 
            }else if(visited[src] == true && dfsVisited[true]){
                return true;
            }
        }
        dfsVisited[src] = false;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsVisited;
        /*
        Koichilam na ami oidin je ashole eitao oirkom hard kichu na. er ager je porblem ta orthat detect cycle in undirected 
        graph oitar moddhe amra kintu bfs use korchilam. ar ami er ageo onekbar kotha ta koichi je vai amader grpah er most of
        the question will be solved using bfs and dfs. but dfs thekeo beshi use hoy bfs. 

        accha amra eita solve korbo recursion approach er moddhome orthat using dfs. vai code pura e same as like dfs. but eikhne
        khali ekta extra mapping need which is dfsVisited. 
        */
        /*
        Jodi amader kono dis conncected grpah thake shejonno amra loop er madhhome shob gula vertice traverse korbo. 
        */
        for(int i = 0; i < V; i++){
            if(visited[i] != true){
                if(getAns(i, visited, adj, dfsVisited)){
                    return true;
                }
            }
        }
        return false;
    }