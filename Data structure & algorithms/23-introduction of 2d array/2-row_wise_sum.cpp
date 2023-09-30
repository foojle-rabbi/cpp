#include<iostream>
using namespace std;

void printSumRow(int arr[][3], int n, int m){
    cout<<"printing row wise sum: "<<endl;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<"\t";
            sum += arr[i][j];
        }
        cout<<"-->"<<sum<<endl;
    }
}

void printSumCol(int arr[][3], int n, int m){
    cout<<"printing col wise sum: "<<endl;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[j][i];
        }
        cout<<"-->"<<sum<<endl;
    }
}

int main()
{
    int arr[3][3] = {{3, 4, 11}, {2, 12, 1}, {7, 8, 7}};
    int sum = 0;

    printSumRow(arr, 3, 3);
    printSumCol(arr, 3, 3);

    return 0;
}