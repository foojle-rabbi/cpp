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

void insertInCorrectPosition(stack<int> &s, int val){
    //base case
    if(( !s.empty() && val > s.top()) || s.empty()){
    //the problem on this code is with this condition
        s.push(val);
        return;
    }

    int num = s.top();
    s.pop();

    insertInCorrectPosition(s, val);

    s.push(num);
}

void sortStack(stack<int> &s){
    if(s.size() <= 1){
        return;
    }

    int num = s.top();
    s.pop();

    sortStack(s);

    insertInCorrectPosition(s, num);
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(35);
    s.push(2);
    s.push(9);
    display(s);

    sortStack(s);
    display(s);
    return 0;
}