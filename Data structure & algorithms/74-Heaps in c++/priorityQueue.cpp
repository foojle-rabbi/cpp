#include<iostream>
#include<queue>
using namespace std;

int main()
{
    /*
    Etokkhon porjonto amra ja kichu shikhlam heap, max heap, min heap, heapify, insertion deltaion. heap sort orthat ja kichu 
    e shikhchi sheigula toh dekhlam. ekhon oigular e ekta stl ache. jar name priority queue. jar jonno amader header file #include<queue>
    include korte hoibo eituku e. 
    */

    //max heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(15);
    pq.push(50);
    pq.push(28);

    cout << "Top element is: " << pq.top() << endl;
    pq.pop();
    cout << "Top element is: " << pq.top() << endl;

    if(pq.empty())
    {
        cout << "Max heap is empty" << endl;
    }else
    {
        cout << "Max heap is not empty" << endl;
    }
    /*
    Normal amra jeivabe queue ba stl use kori tar moto orthat eikhane "pq" hocche amar ekta max heap
    */

    //creation of min heap
    priority_queue<int, vector<int>, greater<int> > minHeap;
    minHeap.push(5);
    minHeap.push(15);
    minHeap.push(50);
    minHeap.push(28);

    cout << "Top element is: " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Top element is: " << minHeap.top() << endl;

    if(minHeap.empty())
    {
        cout << "Min heap is empty" << endl;
    }else
    {
        cout << "Min heap is not empty" << endl;
    }
    return 0;
}