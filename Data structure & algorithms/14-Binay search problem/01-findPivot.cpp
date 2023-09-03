#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int s = 0;
    int e = n -1;
    int ans = -1;
    while(s < e){
        int mid = (s + e) /2;
        if(arr[mid] > arr[e]){
            cout<<"Entering into first condition"<<endl;
            s = mid + 1;
            ans = s;
        }else{
            e = mid;
        }
    }
    return ans;
}

int main()
{
    /*
    Find pivit; 
    mane amare ekta array doeya thakbe je sorted hobe sathe rotated; mane mone kor array ta hobe emon [1, 2, 4, 7, 9] ekhon 
    ami jodi eitare 2 bar rotate kori taile array ta hobe: [7, 9, 1, 2, 4] ekhon karo karo mote 9 hoiteche pivot; abar karo
    karon mote 1 hoiteche pivot; jaak amder instructor 1 kei pivot dhore koraiche; toh tomke ei pivot er index e return kore
    dite hobe;

    spoiler alert: eshob question bujhar jonno graph nia dry run korle aro easy hoiya jay; so try to do dry run with graph;
    */

    int arr[] = {3,4,5,1,2};
    int size = sizeof(arr) / sizeof(int);
    cout<<"Pivot index is: "<<findPivot(arr, size)<<endl;
    return 0;
}

/*
Wait obak lagteche eita deikha kemone ami solve kore fellam; cause ami just love babbar mia tutorial dekhchilam; oikhna thaika
just ekta idea; idea bolte dekhchilam koichi pore solve kormu; ei ar ki; toh ekhon solve korte boisha nije nije dry run koira
solve korte gechilam; oma kono motei toh milate partechilam nah; pore nije nije jokhon oi 2 type of graph er chinta aiche tokhon
khub easyly solve korte parlam;

jaak solve korar mul kahini hoiteche graph tui ei array take graph e insert kor; then think for a minute and then the baki solve
is above;
*/