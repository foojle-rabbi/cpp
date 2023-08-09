#include<iostream>
using namespace std;

class simple{
    int s, returnValue;
    float l;
    public:
        simple(){}

        simple(int x, float y){
            s = x; 
            l = y;
        }

        void interest(int a){
            returnValue = a;
        }

        void display(void){
            cout<<"Value of s: "<<s<<" value of l: "<<l;
            cout<<"The return value was: "<<returnValue;
        }
};

int main()
{
    int s;
    float l;
    simple obj, obj2;
    obj.display();

    cout<<"Enter the value of s and l: ";
    cin>>s>>l;

    obj2 = simple(s, l);
    obj2.display();
    return 0;
}