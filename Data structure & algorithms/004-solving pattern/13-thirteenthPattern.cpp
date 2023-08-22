#include<iostream>
using namespace std;

int main()
{
    /*
    D 
    C D
    B C D
    A B C D
    */
    //okay no pera lets solve it later
    int n;
    cout<<"Enter the vlaue of n: ";
    cin>>n;

    char ch = 'D';
    for (int i = 0; i < n; i++)
    {
        char c= 'D';
        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}