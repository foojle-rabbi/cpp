#include<iostream>
using namespace std;

int main()
{
    /*
    A A A A
    B B B B 
    C C C C 
    D D D D 
    */

    int n;
    cout<<"Enter the vlaue of n: ";
    cin>>n;

    int cha = 'A';
    for(int i = 0; i <n; i++){
        char ch = cha;
        for(int j = 0; j < n; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        cha++;
    }

    /*
    Last e ekta kotha koi; kotha ta holo emn je amr ei program ta run korar pore ekta success er moton lagche; er karon holo
    gia ami jeikhan theke code ta dekhchi oikhane ei code ta mane pattern ta print korte alada ekta formula use korche. jeta
    amar kache onek hard lagche; mane formula use kora kmn jani na; tai ami nije theke oi code ta implement korlam and 
    finally iam succeed; haa haaa haaa;
    */
    return 0;
}