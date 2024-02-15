#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseFirstK(queue<int> &q, int k){
    stack<int> s;

    //first step: push firth kth elements to a stack
    for(int i = 1; i <= k; i++){
        s.push(q.front());
        q.pop();
    }

    //2nd step: enqueue the stack's value to queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    //3rd step: now pop the first elemetns and push it back of the original queue;
    int t = q.size() - k;
    while(t--){
        q.push(q.front());
        q.pop();
    }    
}

void display(queue<int> q){
    cout << "Elements of queue: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    display(q);
    reverseFirstK(q, 3);
    display(q);
    return 0;
}