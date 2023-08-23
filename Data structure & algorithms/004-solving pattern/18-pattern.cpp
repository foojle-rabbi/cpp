#include<iostream>
using namespace std;

int main()
{
    /*
         1
        2 3
       3 2 1 2
     4 3 2 1 2 3
    */

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout<<" ";
        }

        int temp = i;
        for (int  j = 1; j <=i; j++)
        {
            cout<<temp;
            temp--;
        }

        temp = 2;
        for (int j = 0; j < i -1; j++)
        {
            cout<<temp;
            temp++;
        }  
        cout<<endl;
    }

    /*
    Accha ei gelo pattern err kahini; jai hook mr. love babbar e koraiche ek fomula dia ar ami korchi arek formula dia; kintu
    sheshe gia pattern milche; ekhon kotha hocche pattern millei share naki, heer moto formula use koira tarpor korte hoito?

    dhurr!! jani na kichu nijer moto nuje korhci;
    */
    return 0;
}