#include<iostream>
using namespace std;

class test{
    string name;

    public:
        test(string name){
            this -> name = name;    //beshi kichu na etai "this" keyword er kaaj;
        }
    void display(){
        cout<<name<<endl;
    }
};

int main()
{
    test obj("Fojle");
    obj.display();
    return 0;
}