#include<iostream>
using namespace std;

//Inline function one kind of optimization
// inline int product(int a, int b){
//     return a*b;
// }
//inline funcion is not recomended in "recursive function" "static function" 

//static variable
int product(int a, int b){
    static int c = 0;
    c = c + 1;
    return a *b + c;
}

//default argument
int moneyReceive(int money, float interest = 2.2){
    return money * interest;
}

//constatnt argument
int strlen(const char p){
    //you dont want to change the p string
}
int main()
{
    int x = 5;
    int y = 3;

    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;
    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;
    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;
    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;
    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;
    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;
    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;
    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;
    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;
    cout<<"The poduct of a and b is : "<<product(x, y)<<endl;


    int money;
    cout<<"how much money do you have: ";
    cin>>money;
    cout<<"You have interest : "<<moneyReceive(money)<<endl; //as you have set a default "interest" you can skip
    cout<<"You have interest : "<<moneyReceive(money, 0.2)<<endl; //though you have set a default argument you can send another value

    return 0;
}