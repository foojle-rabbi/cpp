#include<iostream>
using namespace std;

bool isPalindrome(string s, int start, int end){
    //base case
    if(start > end){
        return true;
    }

    if(s[start] != s[end]){
        return false;
    }else{
        return isPalindrome(s, start++, end--);
    }
}

int main()
{
    //check if a string is palindrome
    string s = "abcdeedcba";

    cout << isPalindrome(s, 0, 10) << endl;
    return 0;
}