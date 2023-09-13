#include<iostream>
using namespace std;

void display(int *arr, int n){
    cout<<"Elements of array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void moveZeroes(int *arr, int n){
    int non_zero = 0;
    for(int i = 0; i <n; i++ ){
        if(arr[i] != 0){
            swap(arr[i], arr[non_zero]);
            non_zero++;
        }
    }
}

int main()
{
    /*
    problem: move zeros;
    mane hoiteche tomare ekta array doeya thakbe jetate o ar onno vlue deoya thakbe tomare oi zero gulare right side e nia jaite hobe;
    zemon mai jodi boli input hisabe emon ekta array [1, 0, 2, 0, 0, 5] taile output hisabe thakar kotha: [1, 2, 5, 0, 0, 0];
    
    --> ar he order kintu maintain korte hobe; mane aage 1 thakle 1 e;

    solution easy e: causer ami ekta pointr nibo jeita prothome first index ke point kore thakbe; then pura array ke traverse korbo ar jodi
    zero pai taile ignore korbo ar jodi oita non zero value hoy then oi je ekta point kore chilo tar sathe non zero vlaue ke swap kore dibo
    and sathe non zero pointer take ++ kore samner index e point korte dibo; ar eivabei ekshomy shob gula zero right e shift hoye jabe;
    */

    int arr[] = {1, 0, 2, 0, 0, 5};

    display(arr, 6);
    moveZeroes(arr, 6); //dhuru eitao hoy nai; problem find out korte hoibo;
    display(arr, 6);   
    return 0;
}