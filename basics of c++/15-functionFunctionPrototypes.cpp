#include<iostream>
using namespace std;

//Function prototypes
int sum(int a, int b);
void greeting();

int main()
{
    int x;
    int y;

    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second value: ";
    cin>>y;

    //x and y are the actual parameters
    cout<<"The sum is : "<<sum(x,y)<<endl;

    greeting(); //i thing this is called declaration

    return 0;
}

//functions //i forget but i thing this section is called definination
int sum(int a, int b){

    //here a and b both are formal parameters
    return a + b;
}

void greeting(){ 
    cout<<"Hello good morning"<<endl;
}