#include<iostream>
using namespace std;

int main()
{
    /*
    A B C 
    D E F
    G H I
    */
    int n;
    cout<<"Enter the vlaue of n: ";
    cin>>n;

    int ch = 65;
    char c = ch;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}