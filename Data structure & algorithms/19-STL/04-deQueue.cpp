#include<iostream>
#include<deque>
using namespace std;

int main()
{
    /*
    dequeue menas double ended queue; queue ki asha kori sheta janoch; mane first in first out; mane lifo; accha toh oitar motoi dequeue
    tobe dequeue mane double ended queue er moddhe ekta extra benefit ache sheta holo iccha moto first o insert kora jay abar iccha korle
    last e insert and delete 2 tai kora jay; 
    */

    deque<int> dq;
    dq.push_back(5);
    dq.push_front(10);
    dq.emplace_back(55);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    cout<<dq.front()<<endl;

    /*
    Accha eitao same; kaorn motamuti protita stl er function ek e. just koyektar kichu kichu unique kichu ache; echara baki shob same;
    jemon: double ended queue er benefits holo eitar 2 dik dia e push o kora jay abar pop o kora jay; 
    */
    return 0;
}