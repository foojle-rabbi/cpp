#include<iostream>
using namespace std;

int main()
{
    // //break and continue: 
    // fojle no more kahini i know you know about "break" & "continue"
    // in a simple word break means if a particular conditon is true then eliminate the whole loop
    // and continue means if a particualr condition is true then skip it conditon

    for(int i = 0; i < 10; i++){
        if(i == 5) //it will not print the 5
        continue;
        cout<<i<<endl;
        if(i == 6) //the loop will be terminated only printing 6;
        break;
    }
    return 0;
}