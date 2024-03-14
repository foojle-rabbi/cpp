#include<iostream>
using namespace std;

void reverse(string &s){
    int start = 0;
    int e = s.size() -1;

    while(start <= e){
        swap(s[start], s[e]);
        start++;
        e--;
    }
}

int main()
{
    /*
    Areh facebook e dekhtechi tai dekhi amio banaite pari kina?
    */

    string s;

    while(1){
        cout << "Enter a word: ";
        cin >> s;
        reverse(s);
        cout << "Reversed word: " << s << endl << endl;
        
    }
    return 0;
}