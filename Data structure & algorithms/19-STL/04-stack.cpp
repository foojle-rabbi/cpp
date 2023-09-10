#include<iostream>
#include<stack>
using namespace std;

int main()
{
    /*
    Stack menas lifo menas Last in first out; main operations are: 1. push, 2.pop, 3. top;
    */

    stack<int> s;
    s.emplace(5);
    s.emplace(4);
    s.emplace(2);
    s.emplace(0);

    cout<<s.top()<<endl;

    while(!s.empty() != 0){
        cout<<s.top()<<" ";
        s.pop();
    }

    /*
    Oi hello mia shaheb shonen,  baki operations gula same; ar (s.) korlei baki gula apnake suggestion korbo; toh vuleo jodi jao 
    taile pera nai couse tomare toh protiniyo suggestion korte e ache; okay then -->
    */
    return 0;
}