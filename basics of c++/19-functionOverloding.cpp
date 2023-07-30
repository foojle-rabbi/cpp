#include<iostream>
using namespace std;

//overloader funcion
int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

//a great example of overload function
float volume(double r, int h){
    return (3.14 * r * r * h);
}

float volume(int a){
    return (a * a * a);
}

float volume(int l, int b, int h){
    return (l * b * h);
}
 //3 funcitons are same but their argument is different so if you call the same ,
 //name but send different argument it will automatically call that functon
int main()
{
    cout<<sum(5, 2)<<endl;
    cout<<sum(5, 2, 8)<<endl;
    return 0;
}