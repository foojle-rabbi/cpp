#include<iostream>

using namespace std;

int main()
{   
    /*
    there are 3 types of basic control structure:
    1. sequence structure (normal code which execute one line after another)
    2. selection structure
    3. loop structue
    */

    ///if else control structure (selection control structure)
    int age;
    cout<<"Enter you age: ";
    cin>>age;

    if(age > 18){
        cout<<"You can enter to the party"<<endl;
    }else if(age == 18) {
        cout<<"Your age is 18?"<<endl;
    }else{
        cout<<"You can not come to party"<<endl;
    }

    //selection control structure "switch case"
    int number = 5;
    switch(number){
        case 1: 
        cout<<"Number is one"<<endl;
        break;

        case 2: 
        cout<<"Number is two"<<endl;
        break;

        case 3: 
        cout<<"Number is three"<<endl;
        break;

        default:
        cout<<"The number is not between 1 to 3"<<endl;
    }
    return 0;
}