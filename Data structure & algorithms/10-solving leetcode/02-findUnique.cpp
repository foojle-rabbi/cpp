#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    /*
    problem: find unique;
    explanation: ei problem tate tomare 2m + 1 size er ekta array deoya thakbe jekhane m number of number thakbe pairly ar 1 
    ta number thakbe single; ekhon tomare oi number ta ber korte hobe; suppose tomar kache [2, 4, 5, 4, 2] ache ei array te
    2 ar 4 2 bar koira ache ar 5 1 bar ache tai ans hobe 5;

    ans: ekhon eita kivabe kora jay; eita xor(^) operator dia khub easily kora jay; karon xor operator er ekta khach gun 
    hoiteche eita a ^ a = 0; kore ar 0 ^ a = a; kore; orthat ei logic kaje lagaiya amra oi array te joto gula duplicate number
    thakbe tader shob gulare eliminate kora jaibo; jar fole kebol unique number tai exits korbe; 
    */

    int arr[] = {2, 4, 5, 4, 2};
    cout<<"Unique number is: "<<findUnique(arr, 5)<<endl;

    int arr2[7] = {1, 5, 2, 5, 2, 1, 9};
    cout<<"Unique number is: "<<findUnique(arr2, 7)<<endl;
    return 0;
}