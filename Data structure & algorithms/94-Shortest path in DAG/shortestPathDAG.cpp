#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;


/*
Pura ta algorithm kemne kore heida jani na but eita jani je shortest path ber korte hobe age topological sort shikhe ashte hobe
kenona amra jani topological sort er output emon ashe je each u will appear before v. tai prothom koyekta step toh amar topo
logical sort ber kortei chole jabe. tar por amar kache je topo er stack thakbe oitakei amar kaje lagiye ans vector e push korte 
hobe. 

jodio ekhon keno jani na mathar moddhe pura puri dhuke nai. tai eita nia etto pera khacchi na. pore aramse abar dekhbo. ar ar 
eikhane directed acyclic graph er moddhe arekta kahini ache sehta hocche jodi amar weight deoya thake tokhon amr unorderd_map
declare kora ta ektu vinno hobe; 
    unordered_map<int, list<pair<int, int> > > adj;

*/

int main()
{
    /*
    shortest path in a directed acyclic graph. abar hoo wight o deoya thakbe.  
    */
    unordered_map<int, list<pair<int, int>>> adj;
    return 0;
}