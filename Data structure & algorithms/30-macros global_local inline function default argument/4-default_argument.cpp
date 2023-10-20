#include<iostream>
using namespace std;

void temp(int a, int b = 5){
    cout << a << endl;
    cout << b << endl;
}

int main()
{
    /*
    kono ekta function er moddhe jodi chao je ami value ditam na eita auto matic ekta ager value nia nibo tokhon default argument use
    korte paro; ar ei kkhetre right e rakhte hobe default argument ke;
    */

    temp(2); //eije eikahne ami a er value dichi but b er vlaue dei nai tai she oi default value 5 auto nia niche;

    temp(2, 10);
    return 0;
}