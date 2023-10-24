#include<iostream>
using namespace std;

void print(int n){
    //base case
    if(n == 0){
        return; 
    }

    //processing
    cout << n << endl;

    //recursive call
    print(n - 1);
}

int main()
{
    //introduction of recursion
    /*
    first of all what is recursion? 
    --> when a function call itself that is called recursion.

    there are some things in a recursion:
        1. base case
        2. process
        3. recursion relation
    
    base condition na dile segmentation error ashbe mane recursion call hoite hoite amar memory full hoiya ek somoy function call stack
    overflow korbe. tai ei error theke bachar jonno first e dorkar base case. ar recursion function e ekta case solve koro baki ta apne
    apne solve hoiya jaibo. 

    tachara jei jei kaj gula loop dia kora jay shei shei kaaj recursion er maddhome o kora jaay. 

    tar moddhe: 
        1. factorial 
        2. print number
        3. power of two
        4. fibonacci er moto aro onek program e ache jei gula recursion er maddhome khub easily solve kora jay... 

    niche khub chotto koira ekta recurison function er udahoron dilam: 
    */

    int n;

    cout << "Enter a number: ";
    cin >> n;

    print(n);
    return 0;
}