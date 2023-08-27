#include<iostream>
using namespace std;

int main()
{
    /*
    ****
    ***     * print korar formula n-i-1
    **
    *
    */
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}