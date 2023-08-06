#include<iostream>
using namespace std;

class shape{
    public:
        double dim1; // dim = dimention;
        double dim2;
        shape(double dim1, double dim2){
            this -> dim1 = dim1;
            this ->dim2 = dim2;
        }

        virtual double area(){     //Ami jehetu ei area function tare onno function e use kormu tai amar ei super class
            return 0;               // er area function ta virtual hoite hobe. virtual na hole program valovabe kaj korbe na.
        }
};

class triangle : public shape{
    public:
        triangle(double dim1, double dim2)
        : shape(dim1, dim2)
        {
            // this -> dim1 = dim1;
            // this -> dim2 = dim2;
        }

        double area(){
            return (0.5 * dim1 * dim2);
        }
};

class rectangle : public shape{
    public:
        rectangle(double dim1, double dim2)
        : shape (dim1, dim2)
        {
            // this -> dim1 = dim1;
            // this -> dim2 = dim2;
        }

        double area(){
            return (dim1 * dim2);
        }
};

int main()
{
    shape *ptr;

    rectangle ob1(5, 4);
    triangle ob2(5, 2);

    ptr = &ob1;
    cout<<"Area of rectangle: "<<ptr -> area()<<endl;

    //there is something wrong in this code! // aah finally i found the problem. the problem was that. as i inheit the shape
    //funciton so the shape funciton area function has to be virtual;

    ptr = &ob2;
    cout<<"area of triangle : "<<ptr -> area()<<endl;

    return 0;
}