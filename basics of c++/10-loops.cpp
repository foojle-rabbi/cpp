#include<iostream>

using namespace std;

int main()
{
    //loops in c++
    // there are 3 types of loops in c++
    // 1. for loops
    // 2. while loops
    // 3. do while loops

    for(int i = 0; i < 5; i++){
        cout<<i<<endl;
    }

    //while loops
    int i = 0;
    while(i <= 40){
        cout<<i<<endl;
        i++;
    }

    //do while loops
    do{
        cout<<"though the condition is false, it will execute"<<endl;
    }while(0);

    //multiplication table:
    int num = 6;
    for(i = 1; i <= 10; i++){
        cout<<num<<" * "<<i<<" = "<<i * num<<endl; //search on google if there any other ways to print the format
    }   

    //you can also do this with other loops

    return 0;
}