#include<iostream>
using namespace std;

class test{
    int a, b;
    public:
        void display(void){
            cout<<"display function is called\n";
        }
};

int main()
{   
    // normal way
    test obj;   
    obj.display();

    //selection operator
    test obj2;
    test *p = &obj2;
    p -> display();

    /*
        selection operator hocche ekata pointer er maddhome function gulare access kora "ptr -> funciton name".
    */
    return 0;
}