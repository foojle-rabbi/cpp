#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{2, 4, 5}, 
                    {5, 5, 9}, 
                    {9,1, 5}};
    int column = 3;
    int rows = 3;
    
    for(int col = 0; col < column; col++){
        if(col & 1){
            // bottom to top
            for(int row = rows - 1; row>= 0; row--){
                cout<<arr[row][col]<<" ";
            }
        }else{
            // top to bottom
            for(int row = 0; row < rows; row++){
                cout<<arr[row][col]<<" ";
            }
        }
    }
    return 0;
}