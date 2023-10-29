#include<iostream>
using namespace std;

void reverse(string &s, int start, int end){
    // base case
    if(start > end){
        return;
    }

    swap(s[start], s[end]);
    start++; end--;

    reverse(s, start, end);
}

int main()
{
    string ch = "fojle";

    reverse(ch, 0, ch.length() -1);

    cout << ch << endl;
    
    return 0;
}