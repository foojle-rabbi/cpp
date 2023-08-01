#include<iostream>
using namespace std;

//forword declarations
class y;

class x{
    int data;
    public:
    void setData(int value){
        data = value;
    }
    friend void add(x, y);  //friend function
};

class y{
    int data;
    public:
    void setData(int value){
        data = value;
    }
    friend void add(x, y);
};

void add(x o1, y o2){
    cout<<"Sum is : "<<o1.data + o2.data<<endl;
}

int main()
{
    x a;
    a.setData(5);

    y b;
    b.setData(8);

    add(a, b);
    return 0;
}