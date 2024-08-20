#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct tri
{
    int weight;
    int node;
    int parent;
};


int main()
{
    /*
    Accha eikhane ami ekta experiment korbo. suppose amader 2 ta value eksathe dorkar hoible we use pair. now what if we 
    need 3 values at a time. easy: we can use pair<int, pair<int, int> >; kintu ekhon ami dekhi toh struct use kore ki amra
    ei 3 ta value eksathe use korte pari kina?
    */
    // priority_queue<int, vector<int>, greater<int>> pq;
    // pq.push(2);
    // pq.push(20);
    // pq.push(18);

    // cout << "top element is now " << pq.top() << endl;
    // pq.pop();
    
    // cout << "top element is now " << pq.top() << endl;
    // pq.pop();

    // accha taile uporer code gula amar thik thak motoi kaj korteche. 
    //now lets try our struct type
    priority_queue<tri, vector<tri>, greater<tri>> pq;
    pq.push({1, 2, 3});
    pq.push({12, 12, 43});

    cout << "top element is now " << pq.top().node << endl;
    cout << "top element is now " << pq.top().parent << endl;
    cout << "top element is now " << pq.top().weight << endl;
    pq.pop();

    //eita abar kaj kore
    queue<struct tri> q;
    q.push({1, 2, 3});
    q.push({12, 12, 43});

    cout << "Top element details:" << endl;
    cout << "Weight: " << q.front().weight << endl;
    cout << "Node: " << q.front().node << endl;
    cout << "Parent: " << q.front().parent << endl;

    q.pop();

    cout << "Next front element details after pop:" << endl;
    cout << "Weight: " << q.front().weight << endl;
    cout << "Node: " << q.front().node << endl;
    cout << "Parent: " << q.front().parent << endl;

    return 0;
}

/*
I dont know there is so much error showing.

Accha hoyto ami jani keno copilation error dekhacche. er karon hocche operator er. jani ki jonno emon ta hoiche but bujhtechi
na keno emon ta hoiche. 
struct tri {
    int u, v, w;

    bool operator>(const tri& other) const {
        return w > other.w; // Compare based on weight
    }
};

just this operator can fix my code.

*/