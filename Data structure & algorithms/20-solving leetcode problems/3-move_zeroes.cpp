#include<iostream>
using namespace std;

void display(int *arr, int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// void moveZeroes(int *arr, int n){
//     int j = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[i] != 0){
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }

int main()
{
    /*
    problem: move zeros;
    mane hoiteche tomare ekta array doeya thakbe jetate o ar onno vlue deoya thakbe tomare oi zero gulare right side e nia jaite hobe;
    zemon mai jodi boli input hisabe emon ekta array [1, 0, 2, 0, 0, 5] taile output hisabe thakar kotha: [1, 2, 5, 0, 0, 0];
    
    --> ar he order kintu maintain korte hobe; mane aage 1 thakle 1 e;
    */

    int arr[] = {0,1,0,3,12};

    display(arr, 5);
    // moveZeroes(arr, 5); //dhuru eitao hoy nai; problem find out korte hoibo;
    display(arr, 5);
    return 0;
}