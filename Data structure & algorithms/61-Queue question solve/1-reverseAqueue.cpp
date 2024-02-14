#include<iostream>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q){
    //base case
    if(q.empty()){
        return;
    }

    int num = q.front();
    q.pop();

    reverseQueue(q);

    q.push(num);
}

void display(queue<int> q){
    cout << "Elements of Queue: ";

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);

    display(q);
    reverseQueue(q);
    display(q);

    return 0;
}