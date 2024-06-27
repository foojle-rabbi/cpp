#include<iostream>
using namespace std;

int adj[10][10];

void takeInput(void){
    int a, b;
    cout << "Enter the number of nodes and edges: ";

    cin >> a >> b;
    for(int i = 0; i < a; i++){
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
}

void printMatrix(int nodes, int edges){
    for(int i = 0; i <= nodes; i++){
        for(int j = 0; j <= nodes; j++){
            cout << adj[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    takeInput();
    printMatrix(5, 6);
    return 0;
}

// okay then vai look no problem i am with you your bhai is here now nothing to worry about.       1111115588

//  wahts up are well now?
//  hey brother whats upp are you okay or any other problem"? if not 58hey man wha i dont think ki ei key board kharap hoibo? nah kharap \
//  ami kemone boli karon ei keyboard ta onekeei use kore and eitar theke valo feedback paoya jay. but if ami fk 11 or the dell kb 216 ta paitam
//  taile hoyto aro valo hoi