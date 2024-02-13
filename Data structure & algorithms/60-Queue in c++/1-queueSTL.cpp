#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> Q;

    Q.push(5);
    Q.push(12);
    Q.push(42);

    cout << "Front value: " << Q.front() << endl;
    cout << "back value: " << Q.back() << endl;
    /*
        Queues operations are: 
        1. push
        2. pop
        3. empty
        4. size
        5. swap
        6. back
        7. front
    */
    return 0;
}