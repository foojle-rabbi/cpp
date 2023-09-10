#include<iostream>
#include<set>
using namespace std;

int main()
{
    /*
    set stl er jonno khali 2 ta jinish mathay rakhba: 
        1. everything will be in sorted order
        2. every value will be unique;
    
    set moddhe onek gula e operation ache;
    */

    set<int> s;
    s.insert(5);
    s.emplace(10);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(9);
    s.insert(13);

    s.erase(s.begin(), s.find(9)); //chile eivabeo delete kora jay
    s.erase(10); //chaile eivabeo delelte kora jay; eita ekmetro 10 kei delete krobo jodi thake;

    for(auto it : s){
        cout<<it<<" ";
    }cout<<endl;

    //eita print hoile dekhba jei value print hoiche tar shob gula e ekbar print hoiche;

    auto it = s.find(2); //s.find eita ekta iterator return korbe; mane 2 jei address e ache shei address return korbe;

    it++;

    cout<<*(it)<<endl;

    //upper bound ar lower bound nia valo vabe ekta vide dekhish toh
    return 0;
}