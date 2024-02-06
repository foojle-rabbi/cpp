#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> s){
    cout << "Elements of stack: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s, val);

    s.push(num);
}
int main()
{
    stack<int> s;
    s.push(7);
    s.push(35);
    s.push(2);
    s.push(27);
    s.push(9);

    display(s);
    
    insertAtBottom(s, 10);
    insertAtBottom(s, -120);
    display(s);
    return 0;
}