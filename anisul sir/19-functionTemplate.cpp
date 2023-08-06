#include<iostream>
using namespace std;

template <class testTempalte>
testTempalte add(testTempalte a, testTempalte b){
    return a + b;
}

int main()
{
    /*
        ekta example dei tahole sohoje bujhte parbi:
        mone kor tui ekta funciton banaili. jei function 2 ta integer number nibo tarpor sheigular sum tore return korbo.
        accha taile ei function ta shudhu "integer" er kkhetre kaj korbo. hmm....

        ekhon abar tor jodi double ba float type er lage taile tore toh abar 2 ta add function create korte hoibo. ja kina 
        onek time o lagbo abaar jhamelao;

        ar shei jhamela dhur korar jonno ahce "function template;"
    */

    cout<<"The sum is: "<<add(2.5, 5.4)<<endl;
    return 0;
}