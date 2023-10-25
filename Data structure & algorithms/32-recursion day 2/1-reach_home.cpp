#include<iostream>
using namespace std;

void reachDest(int reached, int dest){
    //base case
    if(reached == dest){
        cout << "I reached my destination" << endl;
        return;
    }

    //proccessings
    cout <<"reached : " <<reached<<" destination: " << dest << endl;
    
    //recursive call
    reachDest(reached + 1, dest);
}

int main()
{
    //base case is mandatory and return case must.
    reachDest(0, 10);
    return 0;
}