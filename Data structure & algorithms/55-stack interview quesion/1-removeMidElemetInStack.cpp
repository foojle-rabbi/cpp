#include<iostream>
#include<stack>
using namespace std;

void removeMid(stack<int> &s, int count, int size){
    if(count == size / 2){
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    removeMid(s, ++count, size);

    s.push(num);
}

int main()
{
    stack<int> s;

    s.push(5);
    s.push(2);
    s.push(0);
    s.push(-10);
    s.push(8);
    

    int count = 0;
    removeMid(s, count, s.size());

    cout << s.size() << endl;
    return 0;
}