#include<iostream>
#include<queue>
using namespace std;

int main()
{
    /*
    Queue mane shari; mane first in first out; je aage ashbe she e age chole jabe;
    */

    queue<int> q;
    q.push(52);
    q.push(3);
    q.push(41);
    q.push(74);

    q.pop();
    cout<<q.front()<<endl;
    return 0;
}