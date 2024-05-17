#include<iostream>
using namespace std;

int adj[10][10]; //globally initialize korar motive hocche jate array er shob gula value amar 0 dia initialize hoy. 
class grpah{
    public:
    int nodes, edges;
    void takeInput(){
        cout << "Enter the number of nodes and edges: ";
        cin >> nodes >> edges;

        int a, b;
        for(int i = 0; i < nodes; i++){
            cin >> a >> b;
            adj[a][b] = 1;
            adj[b][a] = 1;
        }
    }

    void print(void){
        for(int i = 0; i <= nodes; i++){
            for(int j = 0; j <= nodes; j++){
                cout << adj[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

/*
Graph data structure shomporke toh janlam e. ekhon kotha hocche gia ei graph ke toh 2 way te represent kora jay. one is
adjacent of list ar arekta hocche adjacent of matrix. ekhon eikhane ami adjacent of matrix er represntaion ta dekhailam. but
in realiy matrix use kora hoy na. karon 2d array nile amader onek space hudai waste hoy. she jonno amder adjacent of list tarei
beshi preffer kora hoy. onek jaygay toh matrix re dekhai e na. 


kintu tarpor o ami jokhon c korchilam tokhon eita shikhechilam. aar shejonno e sheitar moto kore eikhane implemnt korlam. 
*/

int main()
{
    grpah g;
    g.takeInput();
    g.print();
    return 0;
}

//output string: 4 4 1 2 1 3 2 3 3 4 