class solution{
    public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        //cholo ei spanning tree er question tao khub easy method use kore solve kore feli
        // amar joto tuku mone ache eikhaneo amra just 3, 4 ta step follow korbo.
        
        //step 1 declare the variables;
        vector<bool> isMst(V, false); //jate amra ekta track rakhte pari je kon kon node gula nia amra spanning tree make kore felechi to avoid cycle
        vector<int> parent(V); // graph draw korar jonno eita use kora hoy;
        
        //eibar priority queue 
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        pq.push({0, {0, -1}}); //accha jehetu eikhane amader 3 ta value dorkar jehetu amra eikhane pair of pair nichi jate kroe 3 ta value niya kaj 
        //korte pari. ar amra amader priority queue make korbo weight er upor vitti koira. ar amra first e 0 ke source node dhore nichi. she jonno 
        // first node er weight 0; node o 0; ar sathe parent hocche -1; mane er kono parent nai.
        
        //ar ho amare jehetu total cost ta return korte hobe sehetu ekta variable cost declar kori.
        int cost = 0;
        
        //step 2: 
        //eibar ekta loop chalao jotokhon na queue empty hocche 
        while(!pq.empty()){
            //eibar oi first node ta queue theke ber koro. obviously oitai minimum hobe.
            int weight = pq.top().first;
            int node = pq.top().second.first;
            int prev = pq.top().second.second;
            
            pq.pop();
            
            //eibar por korar por dekho to tomar node ta ki mst er part kina. jodi part hoy taile skip;
            if(isMst[node]) continue;
            //ekhon jehetu part na tai ismst true kore deo;
            //eibar jei node ta ber korchila oitare isMst mark koro sathe cost tao add koira neo
            isMst[node] = true;
            cost = cost + weight;
            parent[prev] = node;
            
            //eibar ei node er ashe pashe joto gula node ache mane neighbour node oigulare queue te push koro. but mathay rakhba oita jate amar 
            //already mst er moddhe na thake. jodi thake taile taile kintu cycle hoiya jaibo.
            for(auto edges : adj[node]){
                int neighbour_node = edges[0];
                int weight = edges[1];
  
                if(!isMst[neighbour_node]){
                    pq.push({weight, {neighbour_node, node}});
                }
            }
        }
        return cost;
    }
};

/*
Ashole code ta oirokom aha mori hard type er kichu na. normal koyekta step follow korlei solve hoye jay. tai ami ekhon oi
step gula ektu easily explain kori.
    1. first tomar jei jei variable gula dorkar hobe sheigula declare kro. toh tar jonno tomar first e dorkar 
        isMst --> jatekon kon node gula alreay mst er part shetar track rakh jay;
        parent --> parent ta muloto dorkar hoy amader minimum spanning tree draw korar jonno;
        priority queue --> eitar dorkar hocche jate amra minimum weight tare age ber korte pari.

    2. tarpor minHeap e first e jekono ekta node push koro. toh amra eitare 0 dhoira nilam. eitar wight apatoto 0, node 0;
        ar parent keu nai tai -1;

    3. eibar jotokkhon na porjonto tomar queue empty na hoy totokkhon ekta loop chalao

    4. loop er vitor frist shob cheye minimum jei value tare pop koro. tar por dekho je eita isMst er part kina. jodi part
    hoy taile kaj korar dorkar nai.

    5. ei step e ashche mane eita mst er part na. tai eibar eitar wight age + koro. then parent set kro. tar por eitar 
        neighbour gulare iterate koro. 
    
    6. vitore enter kore ismst er part na hole just min heap e push korte thako. baki kaj mean heap korbe. 

Bach ei koyekta step follow korlei solve hoye jabe amader Minimum spanning tree / prim's algorithms.
*/