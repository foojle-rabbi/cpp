#include<iostream>
using namespace std;

bool isPalindrome(string ch, int s, int e){
    //base case
    if(s > e){
        return true;
    }

    if(ch[s] == ch[e]){
        return isPalindrome(ch, s+1, e-1);
    }else{
        return false;
    }
}

int main()
{
    string s = "abba";

    if(isPalindrome(s, 0, s.length() - 1)){
        cout << "Is palindrome" << endl;
    }else{
        cout << "is not palindrome" << endl;
    }
    return 0;
}