#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class solution{
    public:
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        //accha amader ke jei graph ta deoya thakbe oita hobe connceted graph. kenono disconnected graph er spanning hoy na
        //frist e lets initialize our vectors and priority queue
        vector<bool> isMst(V, false); // orthat amader jate loop create na hoy
        vector<int> parent(V); // eita dorkar hoy graph draw korar jonno.

        priority_queue<int, vector<int>, greater<int> > pq;
        //ajke matha ta prochur betha korteche. tai ghuami ga gia. betha bolte onek betha korteche re vai onek.
    }

};

int main()
{
    
    return 0;
}