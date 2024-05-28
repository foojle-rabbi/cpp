#include<iostream>
using namespace std;

int main()
{
    char ch;
    
    while (true)
    {
        cout << "Enter c to continue and q for exit: ";
        cin >> ch;
        if(ch == 'c'){
            cout << "You pressed c" << endl;
        }else if(ch == 'q'){
            break;
        }else{
            cout << "invalid choice" << endl;
            continue;
        }
    }
    
    return 0;
}