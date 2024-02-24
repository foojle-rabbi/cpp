#include<iostream>
#include<queue>
using namespace std;

void display(queue<int> q){
    cout << "Items of queue: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void interLeave(queue<int> &q){
    //first approach using one queue
    queue<int> temp;
    for(int i = 0; i <= q.size() / 2 + 1; i ++){
        temp.push(q.front());
        q.pop();
    }
    display(temp);

    while(!temp.empty()){
        q.push(temp.front());
        temp.pop();
        q.push(q.front());
        q.pop();
    }

    //second approch using only a stack;
}

int main()
{
    /*
        Soppose you have give an queue: 11, 12, 13, 14, 15, 16, 17, 18
        ekhon ami jodi first half er sathe second half interleave kori taile ans hobe: 11, 15, 12, 16, 13, 17, 14, 18;

        And yes you can only use one stack only; YOu can not use extra space except a stack only;
    
    */
    queue<int> q;
    for(int i = 11; i <= 18; i++){
        q.push(i);
    }

    display(q);

    interLeave(q);

    display(q);

    return 0;
}

#include <stdio.h>
#include <limits.h>

int main() {
    int x = INT_MAX;  // Maximum representable value for a signed int

    // Attempt to overflow by adding 1
    x = x + 1;
    printf("Int max value: %d\n", INT_MAX);
    printf("Result after overflow: %d\n", x);

    return 0;
}