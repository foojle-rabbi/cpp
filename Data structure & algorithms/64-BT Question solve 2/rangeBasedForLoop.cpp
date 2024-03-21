#include<iostream>
using namespace std;

int main()
{
    /*
    Range based for loop hocche emon ekta way jetar maddhome khub easily ar simply kono ekta loop er kaj kora jay. ashole eita dia bujhaichi je eitar sahajje simple kichu 
    code leikha e ekta loop er kaj kora jay. jemon: 
    
    */

    int arr[] = {1, 2, 3, 4, 5};
    //accha uporer ta hocche amader nomal array. toh amra toh shobai e jani je ekta array theke kivabe loop er sahajje print korte hoy
    cout << "traditional way to printing values: " ;
    for(int i = 0; i < (sizeof(arr) / sizeof(int)); i++){
        cout << arr[i] << " ";
    }cout << endl;


    cout << "Auto method for printing values: ";
    for(auto i: arr){
        cout << i << " ";
    }

    /*
    Jodio 2 ta loop e amader same kaj korche but amader auto mia ekta simpler code bohon kore ei arki. kichu kichu somoy amra chaile ei auto miayare use korte pari. 
    */
    return 0;
}