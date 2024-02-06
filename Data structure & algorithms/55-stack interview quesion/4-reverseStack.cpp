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

void insertAtBottom(stack<int> &s, int key){
    if(s.empty()){
        s.push(key); 
        return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s, key);

    s.push(num);
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int sideValue = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, sideValue);
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

    reverseStack(s);
    display(s);
    return 0;
}