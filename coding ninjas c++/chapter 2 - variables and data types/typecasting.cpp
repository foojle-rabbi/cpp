#include<iostream>
using namespace std;

int main()
{
    /*
    c++ e type casting bolte ekta variable type er loge arek variable er type ke milano. er mane hoilo gia. ami jodi char er sathe int
    add kori taile amar value koro ashar kotha.
    */

    char ch = 'A';
    int num = 5;

    cout << ch + num << endl; // normaly ekhon ami char er sthe int add kortechi tai compiler auto matic eitake int e convert korch jar
                                // karone value ashbo matro 70;
    cout << (char)(ch + num) << endl; // but ekhon jehetu ami er aage (bracket ) dia char leikha dichi tai amar vlaue ta ashbe char e

    //ei je ekbar kichu na lekhar karone value aichilo intiger e eitake bole implicit converstion. ar ami jeita korchi nijer icchay oitake
    // bole explicit converstion
    return 0;
}