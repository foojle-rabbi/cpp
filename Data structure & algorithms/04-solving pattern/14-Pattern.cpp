#include<iostream>
using namespace std;

int main()
{
    /*
       *
      **
     *** 
    **** 
    */
   //etareo pore dekhi
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
                cout<<" ";
        }
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
pattern kintu arro bohut baki ache;
*/