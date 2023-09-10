#include<iostream>
#include<queue>
using namespace std;

int main()
{
    /*
    Priority queu ta ashole queue er motoi but eikhane value gula sorted way te thake;
    */
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(9);
    pq.push(4);
    pq.push(5);

    // while(!pq.empty() != 0){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }
    // cout<<pq.top()<<endl;
    
    /*
    Accha ekhon code koira aro jeta bujhlam sheta holo gia je, priority queue amader normal queeu er moto but ekta big difference holo 
    eita je eitar moddhe value gula store hoy sorted order e; so tumi jodi pop korte jao taile oi same vabe mane sorted way tei pop hobe;
    mane aage konta dicho na dicho oita matter korbe na; hey her moto sort kore nibe tarpor oi sort kora thekei tomare top kou pop kou back
    kou shob e return korbo; 

    Asha kori bujhaite parchi; ami tarporeo abar boli je vai tumi jodi bhuila jao ga ba mone na thake tahole website ache chatgpt ache 
    tader ke jigaiba noyto ektu ghata ghati korba ar na hoy nijer ta nijeri code kore explore korba; kemon? 
    */

    /*
    Wait wait arekta main jinish je priority queue 2 dhoroner hoy ekta hocche max priority queue ar arekta hocche minimum priotity queue
    tdder ke abar max heap / min heap o bole thake;

    normally declare korle max heap hoy;
    */

    priority_queue<int, vector<int>, greater<int>> minHeap; //min heap declare korar way;
    minHeap.push(12);
    minHeap.push(1);
    minHeap.push(-9);
    minHeap.push(18);

    while(!minHeap.empty() != 0){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    return 0;
}