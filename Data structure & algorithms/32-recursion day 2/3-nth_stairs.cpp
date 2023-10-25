#include<iostream>
using namespace std;

int nthStaris(int n){
    //base case
    if(n < 0){ // karon o er cheye kono stair toh thaktei pare na;
        return 0;
    }
    if(n == 0){ // first shiri theke first shiri te ashte 1 ta laaf(jump) lage;
        return 1;
    }

    return nthStaris(n - 1) + nthStaris(n - 2);
}

int main()
{
    //nth stairs using recursion. important thing is recursion tree
    cout << nthStaris(5) << endl;
    return 0;
}