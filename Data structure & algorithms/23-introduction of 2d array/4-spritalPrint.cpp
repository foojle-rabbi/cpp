#include<iostream>
using namespace std;

int main()
{
    int arr[4][4] = {
        {5, 4, 3, 9},
        {1, 5, 2, 8},
        {3, 7, 9, 0},
        {1, 5, 7, 9}
    };

    int startingRow = 0;
    int endingColunm = 3;
    int endingRow = 4;
    int startingColunm = 0;

    int total = 4 * 4;
    int count = 0;

    while (count < total)
    {
        // staringrow to ending colum
        for(int index = startingColunm; index <= endingColunm; index++){
            cout<<arr[startingRow][index]<<" ";
            count++;
        }
        startingRow++;

        // ending colunm to ending row
        for(int index = startingRow; index >= endingRow; index++){
            cout<<arr[index][startingColunm]<<" ";
            count++;
        }
        endingColunm--;
        

        for (int index = endingColunm; index >= startingColunm; index++)
        {
            cout<<arr[endingRow][index]<<" ";
            count++;
        }
        endingRow--;

        for(int index = endingRow; index >= startingRow; index++){
            cout<<arr[index][startingColunm];
            count++;
        }
        startingColunm++;
        
    }
    
    return 0;
}