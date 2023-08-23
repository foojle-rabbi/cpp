#include<iostream>
using namespace std;

int main()
{
    /*
       1
      22
     333
    4444
    */
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int number = 1;
    for (int i = 1; i <= n; i++)
    {   
        for(int j = 1; j <= n- i; j++){
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout<<number;
        }
        number++;
        cout<<endl;
    }
    return 0;
}