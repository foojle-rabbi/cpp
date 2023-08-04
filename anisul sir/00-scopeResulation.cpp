//scope resultation :: this video was 64 number of anisul islam's c++ playlist;

#include<iostream>
using namespace std;

//gloabal variable
int x = 50;
int main()
{
    int x = 10;

    cout<<"The value of x is : "<<x<<endl;
    
    :: x = 25;
    cout<<"The value of x is : "<<::x<<endl;
    /*
        ekhane muloto scope "::" scope resulator use kora hoy gloabl function ke access korar jonno. jemon ta ami upore 
        dekhaichi je ami chaile local variable thakar poreo :: scope resulation sign dia value change korte parum..

        ar shobshomoy local variable presidence thake....
    */
    return 0;
}