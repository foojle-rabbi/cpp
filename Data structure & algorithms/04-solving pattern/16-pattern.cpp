#include<iostream>
using namespace std;

int main()
{
    /*
    1111
     222
      33
       4
    */
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int number = 1;
    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j <i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<number;
        }
        number++;
        cout<<endl;         
    }
    
    return 0;
}