#include<iostream>
using namespace std;

//there are some different between in "struct" and class. class gives the data hiding feature. 
class employee{     /* so, what can i say is this that, in a class there are two types of objects - one is private other is 
                     public. the private object can be only used in that classe's function where the public object can 
                    be used in any funciton.    */
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int x, int y, int z);
        void getData(){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
            cout<<"The value of d is : "<<d<<endl;
            cout<<"The value of e is : "<<e<<endl;
        }
};

void employee :: setData(int x, int y, int z){ //and here if you want to do the full work of a funciton of a class you have
                                                //to write thre return type then class name and then "::" scope resulation
    a = x;
    b = y;
    c = z;
    d = 59;   /* here you can use the private classes object it will not shou any error cause the set data function is 
            a funciton of that class though there are some private object but you can use it on the function which has 
            same class. 

            here the employee class has to things one is private one is public. and there are two function. 
            though there are a b c are private they can be used in those two classes function. not the other funciton
            like you cant use them in main or other funciton */
}   

int main()
{
    employee fojle; //employe class er object "fojle"
    fojle.d = 11;   //can be initialized because "d & e" both are public.
    fojle.e = 22;

    //fojle.a = 5; //here if you want to set the value of private objects you cant do that. it will show error.

    fojle.setData(1, 5, 8);
    fojle.getData();
    return 0;
}