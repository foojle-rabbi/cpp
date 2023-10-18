#include<iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "enter the value of row: "; cin >> row; 
    cout << "Enter the value of col: "; cin >> col;

    int **matrix = new int*[row];
    for(int i = 0; i < row; i++){
        matrix[i] = new int[col];
    }

    cout <<"Enter the matrix's value; ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Values of matrix: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //deletion part:
    for(int i = 0; i < row; i++){
        delete []matrix[i];
    }
    delete []matrix;
    return 0;
}