#include<iostream>
using namespace std;

int main()
{
    /*
    Amra toh jani je switch er moddhe kebol constant value deoya jay mane int and char; now lets see what will happen if we use
    floating and string value;
    */

    // string s = "Fojle";
    // switch(1){ //that means we cant use floating or string value;
    //     case 1: cout<<"This is for case 1"<<endl;
    //             break;
    //     case 2: cout<<"This is for case 2"<<endl;
    //             break;
    //     default: cout<<"This is default case"<<endl;
    // }

    //okay lets explore another thing that is what will happen if we struck in a while loop;
    int b = 2;
    while(1){
        switch (b)
        {
        case 1:
            cout<<"This for case 1"<<endl;
            break;
        
        default:
            break;
        }
    }
    //temon kichu na we will stuck in a infinite loop; to exit we can use exit();
    return 0;
}