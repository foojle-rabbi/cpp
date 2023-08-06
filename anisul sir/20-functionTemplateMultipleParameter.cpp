#include<iostream>
using namespace std;

template <class tmplate, class tmplate2>
tmplate add(tmplate a, tmplate2 b){
    return a + b;
}

int main()
{
    cout<<"the sum is: "<<add(2, 5.4)<<endl;
    return 0;
}