#include<iostream>
using namespace std;

int main()
{
    /*
    A B C
    B C D       FORMULA: A + i + j -2;
    C D E
    */

    int n;
    cout<<"Enter the vlaue of n: ";
    cin>>n;

    int c = 'A';
    for (int i = 0; i < n; i++)
    {
        char ch = c;
        for (int j = 0; j < n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        c++;
        cout<<endl;
    }
    
    /*
    this time i am also feeling proud cause i have implemented the pattern without using the formula that is provided by code
    help by babbar; but as i begineer i dont know will it hamper to my mind; or my learning process? who knows? 
    lets find out!!
    */
    return 0;
}