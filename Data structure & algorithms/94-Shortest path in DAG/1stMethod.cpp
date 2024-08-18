#include<iostream>
#include<vector>
#include<math.h>
#include<limits>
using namespace std;

class solution{
public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        //okay lets solve this problem using our common sense
        //amra kintu jaina ashci je amader ei problem ta solve korte shuddhu 3 ta step dorkar
        
        //step 1: declare two vectors and initialize the source node to 0
        
        vector<bool> explored(V, false);
        vector<int> dist(V, INT_MAX);
        
        //first e source node er distance 0 dia shuru koro
        dist[S] = 0;
        
        
        //loop chalao V time
        int count = V;
        
        while(count--){
        //sathe node re - 1 ar min value ber korar joono ekta max value nia neo
        int node = -1, value = INT_MAX;
        //ekhon oi distance theke shob cheye minimum jei distance ache tare khuje ber kro
        for(int i = 0; i < V; i++){
            //jodi oi node explored na hoy + value minimum hoy tahole tare ber kro. mane tare nia kaj shuru koro
            if(!explored[i] && dist[i] < value){
                node = i;
                value = dist[i];
            }
        }
        
        //eibar jei node tare nichos oitare explored kore de
        explored[node] = true;
        
        //dorlam tumi loop theke ber hoiyai tomar jei node dokar chilo (minimum) tare paiya laicho.
        //eibar ei node re nia tar jotto neighbour ache tader sathe edges er value + korar por jodi minimum
        //hoy tahole update koro distance re.
        for(auto edges : adj[node]){
            
            /*
            amar eikhane sobcheye boro ekta vul chilo ki ami neighour thik mode access korte pari nai. 
            jehetu amar eita 3d array er moto deoya tai ami first auto function use korchi adj vector
            er upor. so amar eges er upor adj aisha porle. tar 0th index hocche node ar 1st node hocche weight
            
            */
            int neighbour_node = edges[0];
            int weight = edges[1];
            
            //now relaxation part er moddhe aisha dekho je amar jei node ta ache oita ki un explore kina
            //jodi unexplored hoy taile dekhba je current node er distance er sathe weight er + korle ki
            //ager distnace[neighbour] node kom hoy kina? jodi kom hoy taile update kore diba.
            if(!explored[neighbour_node] && dist[neighbour_node] > dist[node] + weight){
                dist[neighbour_node] = dist[node] + weight;
            }
        }
        }
        return dist;
    }
};
int main()
{
    /*
    These methods are from coder army.
    Ei problem ta ki she shomporke we talked in the previous file. now we will just solve this problem using just 3 step.
    which are: 
        1. make 2 vectors named explored, distance (first initialise the distance value with INT_MAx);
        2. set the souce node to zero then manullay(using loop) find the minimun distance from the distance which is also 
            not explored.
        3. then when you find that perticular node. seach for the neighbours nodes. tarpor oi neighour node er sathe edges 
            er value gula add kore dekho je ager distance theke smaller hoy kina.? if smaller ashe tahole update kore diba.     
    */
    return 0;
}

/*
But eikhane pura solution tar moddhe ekta khali ghatti ache ar sheta hocche time complexity er. ar time coplexity ta kothay 
beshi hocche tui janos? sheta hocche gia amader minimum distance ber korte gia. amr jei loop ta use kori tar moddhe. taile 
ekhon amra jodi time complexity ta komate chai tahole amader emon kono way ber korte hobe jate kore less time e amra amader 
minimum distance khuje pai. 

accha ekhon question hocche emon kichu ki ashole ache? 
the ans is "yes" ache. sheta hocche amader min Heap. jar time complexity nLogn; so she jonno amra code tare more optimize
korar jonno min heap use korbo. jare amader priority_queue o bola hoy. 

tobe amra toh jene ashchi je heap 2 types. 1. min heap 2. max heap. toh shudhu priority_queue likhte max heap hobe. min heap
er syntax hocce: priority_queue <int, vector<int>, greater<int>> 
*/