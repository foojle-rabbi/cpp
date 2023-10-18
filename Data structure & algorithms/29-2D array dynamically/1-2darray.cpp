#include<iostream>
using namespace std;

int main()
{
    /*creation of 2d array:
    normally armara jeivabe heap e 1D array create kori oi vabe 2D array create kora jay na. cause eitar niyom ta vinno. accha amra eivabe
    caile korte pari nai: (int *arr = new int[row][column]) eivabe possible na;
    */

    int row = 3;
    int col = 3;
    
    int **arr = new int*[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }

    cout << "Please enter some 3 * 3 matrix value: " <<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
        cout << endl; 
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }

    /*
    uporer gula gelo kivabe ekta 2d array create korte hoy, kivabe value input nite hoy kivabe value outpur/print korte hoy shei bepare
    ekhon kotha holo amra toh jani je, statically kono memory allocate hole mane stack e kono memory use korle ta program shesh hoyar 
    por e memory nostho ba free hoiya jay. but heap ba dynamic memory allocation e emon ta hoy na er jonno amder manually memory free
    korte hoy. 
    */

    //manually memory free korar process: 
    for(int i = 0; i < row; i++){
        delete []arr[i];
    }
    
    delete []arr;
    return 0;
}