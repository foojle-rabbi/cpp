#include<iostream>
using namespace std;

int main()
{
    int size = 5;

    for(int i = -1; i < 100; i++){
        cout << (i + 1) % (20 + 1) << " ";
    }

    // ei program ta create korar mul karon hoilo gia eita bujhar jonno je kono ekta number kivabe circularly ghure. formula (i + 1) % size + 1;
    return 0;
}