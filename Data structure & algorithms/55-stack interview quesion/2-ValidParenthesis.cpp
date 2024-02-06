#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string str){
    stack<char> s;
    int i = 0;

    while(i < str.size()){

        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }else if(ch == ')' || ch == '}' || ch == ']'){
            if(s.empty())
                return false;
            
            char top = s.top();
            if((ch == ')' && top == '(' ) || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                s.pop();
            }else{
                return false;
            }
        }
        i++;
    }

    return s.empty();
}

int main()
{
    string parenthesis = "[{(6())}}]";
    
    if(isBalanced(parenthesis)){
        cout << "Parenthesis is balanced" << endl;
    }else{
        cout << "Parenthesis is not balanced" << endl;
    }
    return 0;
}